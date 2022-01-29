// cpp-ansi-colours.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "colours.h"

int main()
{
    ansi::printColourCodes256();

    std::cout << "Hello!" << std::endl;


    std::cout << ansi::bg(226, ansi::fg(207, "Hello!")) << std::endl;


    std::cout << "Hello!" << std::endl;

    return 0;
}
