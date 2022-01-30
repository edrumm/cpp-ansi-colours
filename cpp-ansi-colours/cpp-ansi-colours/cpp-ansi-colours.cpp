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

    std::cout << ansi::bg(27, ansi::fg(245, "Hello!")) << std::endl;

    std::cout << ansi::format(ansi::UNDERLINE, ansi::fg(196, "Hello!")) << std::endl;

    std::cout << ansi::format(ansi::BLINK, ansi::fg(ansi::CYAN, "Hello!")) << std::endl;

    std::cout << ansi::format(ansi::INVERT, ansi::bg(ansi::BLUE, ansi::fg(ansi::ORANGE, "Hello!"))) << std::endl;

    std::cout << ansi::format(ansi::BOLD_BRIGHT, ansi::fg(ansi::WHITE, "Hello!")) << std::endl;

    std::cout << ansi::format(ansi::DIM, ansi::fg(ansi::WHITE, "Hello!")) << std::endl;

    return 0;
}
