// cpp-ansi-colours.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "colours.h"

int main()
{
    ansi::printColourCodes256();

    std::cout << "Hello!" << std::endl;


    std::cout << ansi::bg(ansi::YELLOW, ansi::fg(ansi::PINK, "Hello!")) << std::endl;

    std::cout << ansi::bg(ansi::INDIGO, ansi::fg(ansi::YELLOW, "Hello!")) << std::endl;

    std::cout << ansi::bg(226, ansi::fg(ansi::BLACK, "Hello!")) << std::endl;

    std::cout << ansi::bg(47, "Hello!") << std::endl;

    std::cout << ansi::fg(75, "Hello!") << std::endl;

    std::cout << ansi::fg(196, "Hello!") << std::endl;


    std::cout << "Hello!" << std::endl;

    return 0;
}
