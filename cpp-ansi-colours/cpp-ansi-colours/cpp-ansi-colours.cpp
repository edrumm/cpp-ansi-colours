// cpp-ansi-colours.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "colours.h"

int main()
{
    ansi::printColourCodes256();

    ansi::setColour(ansi::FG, 207);
    ansi::setColour(ansi::BG, 232);

    std::cout << "Hello!";

    ansi::reset();

    std::cout << "Hello!" << std::endl;

    return 0;
}
