#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed
{
private:
    int fixedPointValue;
    static const int fractionalBits = 8;

    