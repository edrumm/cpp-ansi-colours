#pragma once
#include <sstream>

#ifndef COLOURS_H
#define COLOURS_H

namespace ansi {
	const char* RESET = "\033[0m";
	const char* BRIGHT = "\033[1m";
	const char* RESET_BRIGHT = "\033[21m";
	const char* DIM = "\033[2m";
	const char* RESET_DIM = "\033[22m";
	const char* UNDERLINE = "\033[4m";
	const char* RESET_UNDERLINE = "\033[24m";
	const char* BLINK = "\033[5m";
	const char* RESET_BLINK = "\033[25m";
	const char* INVERT = "\033[7m";
	const char* RESET_INVERT = "\033[27m";
	const char* HIDE = "\033[8m";
	const char* RESET_HIDE = "\033[28m";

	const int FG = 38;
	const int BG = 48;

	namespace fg {
		const char* BLACK = "\033[30m";
		const char* RED = "\033[31m";
		const char* GREEN = "\033[32m";
		const char* YELLOW = "\033[33m";
		const char* BLUE = "\033[34m";
		const char* MAGENTA = "\033[35m";
		const char* CYAN = "\033[36m";
		const char* WHITE = "\033[37m";
		const char* DEFAULT = "\033[39m";
	}

	namespace bg {
		const char* BLACK = "\033[40m";
		const char* RED = "\033[41m";
		const char* GREEN = "\033[42m";
		const char* YELLOW = "\033[43m";
		const char* BLUE = "\033[44m";
		const char* MAGENTA = "\033[45m";
		const char* CYAN = "\033[46m";
		const char* WHITE = "\033[47m";
		const char* DEFAULT = "\033[49m";
	}

	void setColour(int pos, int code) {
		if (code < 0 || code > 256)
			return;

		std::stringstream s;
		s << "\033[" << pos << ";5;" << code << "m";

		std::cout << s.str() << std::endl;
	}

	void reset() {
		std::cout << "\033[0m";
		std::cout << "\033[39m";
		std::cout << "\033[49m";
		std::cout << std::endl;
	}

	void printColourCodes256() {
		const char* pad = "";

		for (int c = 0; c <= 256; c++) {
			if (c < 10)
				pad = "  ";
			else if (c < 100)
				pad = " ";
			else
				pad = "";

			if (c % 10 == 0 && c != 0)
				std::cout << std::endl;

			printf("\033[38;5;%dm%d %s\033[0m", c, c, pad);
		}

		std::cout << std::endl;
		pad = "";

		for (int c = 0; c <= 256; c++) {
			if (c < 10)
				pad = "  ";
			else if (c < 100)
				pad = " ";
			else
				pad = "";

			if (c % 10 == 0 && c != 0)
				std::cout << std::endl;

			printf("\033[48;5;%dm%d %s\033[0m", c, c, pad);
		}
	}
}

#endif
