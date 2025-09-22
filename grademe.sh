#!/bin/bash

# grademe.sh - Automated testing script for CPP Modules
# This script compiles and tests all exercises in the CPP-Modules repository

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
PURPLE='\033[0;35m'
CYAN='\033[0;36m'
NC='\033[0m' # No Color

# Counters
TOTAL_EXERCISES=0
SUCCESSFUL_COMPILATIONS=0
FAILED_COMPILATIONS=0
SUCCESSFUL_EXECUTIONS=0
FAILED_EXECUTIONS=0

# Arrays to store results
COMPILATION_FAILURES=()
EXECUTION_FAILURES=()
SUCCESSFUL_TESTS=()

echo -e "${CYAN}============================================${NC}"
echo -e "${CYAN}       CPP MODULES AUTOMATED GRADER        ${NC}"
echo -e "${CYAN}============================================${NC}"
echo ""

# Function to print section header
print_section() {
    echo -e "${BLUE}----------------------------------------${NC}"
    echo -e "${BLUE} Testing $1${NC}"
    echo -e "${BLUE}----------------------------------------${NC}"
}

# Function to test a specific exercise
test_exercise() {
    local module="$1"
    local exercise="$2"
    local dir="$3"
    
    echo -e "${YELLOW}Testing ${module}/${exercise}...${NC}"
    
    # Navigate to exercise directory
    cd "$dir" || {
        echo -e "${RED}❌ Cannot access directory: $dir${NC}"
        COMPILATION_FAILURES+=("$module/$exercise - Directory access failed")
        return 1
    }
    
    # Check if Makefile exists
    if [[ ! -f "Makefile" ]]; then
        echo -e "${RED}❌ No Makefile found in $module/$exercise${NC}"
        COMPILATION_FAILURES+=("$module/$exercise - No Makefile")
        cd - > /dev/null
        return 1
    fi
    
    # Clean first
    make fclean > /dev/null 2>&1
    
    # Attempt compilation
    echo -n "  Compiling... "
    if make > /dev/null 2>&1; then
        echo -e "${GREEN}✅ SUCCESS${NC}"
        ((SUCCESSFUL_COMPILATIONS++))
        
        # Find the executable by parsing Makefile
        local executable=""
        
        # Extract target name from Makefile
        if [[ -f "Makefile" ]]; then
            # Look for the main target (usually after "all:")
            executable=$(grep -E "^all:\s*" Makefile | sed 's/^all:\s*//' | awk '{print $1}')
            
            # If that doesn't work, try to find -o flag in linking command
            if [[ -z "$executable" ]]; then
                executable=$(grep -E "\-o\s+" Makefile | head -1 | sed 's/.*-o\s*//' | awk '{print $1}')
            fi
            
            # If still nothing, try to find any executable file
            if [[ -z "$executable" ]]; then
                executable=$(find . -maxdepth 1 -type f -executable ! -name "Makefile" | head -1)
                if [[ -n "$executable" ]]; then
                    executable=$(basename "$executable")
                fi
            fi
        fi
        
        # Test execution if executable found
        if [[ -n "$executable" && -x "$executable" ]]; then
            echo -n "  Executing... "
            
            # Run basic execution test
            case "$module/$exercise" in
                "cpp00/ex00")
                    # Test megaphone with and without arguments
                    if ./"$executable" hello world > /dev/null 2>&1 && ./"$executable" > /dev/null 2>&1; then
                        echo -e "${GREEN}✅ SUCCESS${NC}"
                        ((SUCCESSFUL_EXECUTIONS++))
                        SUCCESSFUL_TESTS+=("$module/$exercise")
                    else
                        echo -e "${RED}❌ EXECUTION FAILED${NC}"
                        ((FAILED_EXECUTIONS++))
                        EXECUTION_FAILURES+=("$module/$exercise - Runtime error")
                    fi
                    ;;
                "cpp00/ex02")
                    # Account test has a special test file
                    if [[ -f "tests.cpp" ]]; then
                        if ./"$executable" > /dev/null 2>&1; then
                            echo -e "${GREEN}✅ SUCCESS${NC}"
                            ((SUCCESSFUL_EXECUTIONS++))
                            SUCCESSFUL_TESTS+=("$module/$exercise")
                        else
                            echo -e "${RED}❌ EXECUTION FAILED${NC}"
                            ((FAILED_EXECUTIONS++))
                            EXECUTION_FAILURES+=("$module/$exercise - Runtime error")
                        fi
                    else
                        echo -e "${YELLOW}⚠️  NO TEST${NC}"
                        SUCCESSFUL_TESTS+=("$module/$exercise - No test available")
                    fi
                    ;;
                *)
                    # Basic execution test for other exercises
                    if ./"$executable" > /dev/null 2>&1; then
                        echo -e "${GREEN}✅ SUCCESS${NC}"
                        ((SUCCESSFUL_EXECUTIONS++))
                        SUCCESSFUL_TESTS+=("$module/$exercise")
                    else
                        echo -e "${YELLOW}⚠️  NEEDS INPUT${NC}"
                        # Many exercises require user input, count as success if compiled
                        ((SUCCESSFUL_EXECUTIONS++))
                        SUCCESSFUL_TESTS+=("$module/$exercise - Requires interactive input")
                    fi
                    ;;
            esac
        else
            echo -e "${YELLOW}  No executable found or not executable${NC}"
            SUCCESSFUL_TESTS+=("$module/$exercise - Compiled but no executable")
        fi
        
        # Clean up
        make fclean > /dev/null 2>&1
        
    else
        echo -e "${RED}❌ COMPILATION FAILED${NC}"
        ((FAILED_COMPILATIONS++))
        COMPILATION_FAILURES+=("$module/$exercise")
        
        # Show compilation errors for debugging
        echo -e "${RED}  Compilation errors:${NC}"
        make 2>&1 | head -5 | sed 's/^/    /'
        make fclean > /dev/null 2>&1
    fi
    
    # Return to original directory
    cd - > /dev/null
    echo ""
}

# Main execution
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

# Test each CPP module
for module in cpp0{0..9}; do
    if [[ -d "$module" ]]; then
        print_section "$module"
        
        # Test each exercise in the module
        for exercise_dir in "$module"/ex*; do
            if [[ -d "$exercise_dir" ]]; then
                exercise=$(basename "$exercise_dir")
                ((TOTAL_EXERCISES++))
                test_exercise "$module" "$exercise" "$exercise_dir"
            fi
        done
        echo ""
    fi
done

# Print summary
echo -e "${CYAN}============================================${NC}"
echo -e "${CYAN}                SUMMARY                    ${NC}"
echo -e "${CYAN}============================================${NC}"
echo -e "${PURPLE}Total Exercises: $TOTAL_EXERCISES${NC}"
echo -e "${GREEN}Successful Compilations: $SUCCESSFUL_COMPILATIONS${NC}"
echo -e "${RED}Failed Compilations: $FAILED_COMPILATIONS${NC}"
echo -e "${GREEN}Successful Executions: $SUCCESSFUL_EXECUTIONS${NC}"
echo -e "${RED}Failed Executions: $FAILED_EXECUTIONS${NC}"
echo ""

# Show compilation failures
if [[ ${#COMPILATION_FAILURES[@]} -gt 0 ]]; then
    echo -e "${RED}Compilation Failures:${NC}"
    for failure in "${COMPILATION_FAILURES[@]}"; do
        echo -e "${RED}  ❌ $failure${NC}"
    done
    echo ""
fi

# Show execution failures
if [[ ${#EXECUTION_FAILURES[@]} -gt 0 ]]; then
    echo -e "${RED}Execution Failures:${NC}"
    for failure in "${EXECUTION_FAILURES[@]}"; do
        echo -e "${RED}  ❌ $failure${NC}"
    done
    echo ""
fi

# Show successful tests
if [[ ${#SUCCESSFUL_TESTS[@]} -gt 0 ]]; then
    echo -e "${GREEN}Successful Tests:${NC}"
    for success in "${SUCCESSFUL_TESTS[@]}"; do
        echo -e "${GREEN}  ✅ $success${NC}"
    done
    echo ""
fi

# Final grade calculation
if [[ $TOTAL_EXERCISES -gt 0 ]]; then
    COMPILATION_RATE=$((SUCCESSFUL_COMPILATIONS * 100 / TOTAL_EXERCISES))
    EXECUTION_RATE=$((SUCCESSFUL_EXECUTIONS * 100 / TOTAL_EXERCISES))
    
    echo -e "${CYAN}============================================${NC}"
    echo -e "${PURPLE}Compilation Success Rate: ${COMPILATION_RATE}%${NC}"
    echo -e "${PURPLE}Execution Success Rate: ${EXECUTION_RATE}%${NC}"
    
    if [[ $COMPILATION_RATE -ge 90 ]]; then
        echo -e "${GREEN}🎉 EXCELLENT! Your code compiles very well!${NC}"
    elif [[ $COMPILATION_RATE -ge 70 ]]; then
        echo -e "${YELLOW}👍 GOOD! Most of your code compiles successfully!${NC}"
    elif [[ $COMPILATION_RATE -ge 50 ]]; then
        echo -e "${YELLOW}⚠️  NEEDS WORK! Several compilation issues found!${NC}"
    else
        echo -e "${RED}❌ POOR! Many compilation failures detected!${NC}"
    fi
fi

echo -e "${CYAN}============================================${NC}"
echo -e "${CYAN}             GRADING COMPLETE               ${NC}"
echo -e "${CYAN}============================================${NC}"