# Grademe Script

This script provides automated testing for all CPP Modules exercises in this repository.

## Usage

```bash
./grademe.sh
```

## What it does

The `grademe.sh` script will:

1. **Navigate through all CPP modules** (cpp00 through cpp09)
2. **For each exercise** in each module:
   - Navigate to the exercise directory
   - Check for a Makefile
   - Attempt to compile the project using `make`
   - If compilation succeeds, try to execute the resulting binary
   - Clean up build artifacts using `make fclean`
   - Report the status (success/failure) with color-coded output

## Features

- **Colorized output** for easy reading
- **Automatic executable detection** by parsing Makefiles
- **Comprehensive error reporting** showing which exercises failed and why
- **Summary statistics** including compilation and execution success rates
- **Final grade** based on overall performance

## Output Explanation

- ✅ **GREEN**: Successful compilation and execution
- ❌ **RED**: Failed compilation or execution
- ⚠️ **YELLOW**: Compiled successfully but needs interactive input or other minor issues
- 🎉 **CELEBRATION**: Excellent performance (>90% success rate)

## Requirements

- Unix-like environment (Linux, macOS)
- C++ compiler (g++/clang++)
- Make utility
- Bash shell

## Example Output

```
============================================
       CPP MODULES AUTOMATED GRADER        
============================================

----------------------------------------
 Testing cpp00
----------------------------------------
Testing cpp00/ex00...
  Compiling... ✅ SUCCESS
  Executing... ✅ SUCCESS

Testing cpp00/ex01...
  Compiling... ✅ SUCCESS
  Executing... ✅ SUCCESS

...

============================================
                SUMMARY                    
============================================
Total Exercises: 38
Successful Compilations: 37
Failed Compilations: 1
Successful Executions: 31
Failed Executions: 0

Compilation Success Rate: 97%
Execution Success Rate: 81%
🎉 EXCELLENT! Your code compiles very well!
============================================
             GRADING COMPLETE               
============================================
```

## Notes

- The script automatically cleans up build artifacts after testing each exercise
- Some exercises may require interactive input and will be marked accordingly
- Compilation failures will show the first few lines of error output for debugging
- The script respects the standard 42 School project structure and naming conventions

## Troubleshooting

If you encounter issues:

1. Make sure you have execution permissions: `chmod +x grademe.sh`
2. Ensure you're running from the repository root directory
3. Check that all Makefiles are properly formatted and functional
4. Verify your C++ compiler supports C++98 standard