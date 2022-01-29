#pragma once
#include <sstream>

#ifndef COLOURS_H
#define COLOURS_H

namespace ansi {
	
	/*
	
		Redefine constants etc...
	
	*/

	
	std::string fg(int code, std::string text) {
		if (code < 0 || code > 256)
			return text;

		std::stringstream s;
		s << "\033[38;5;" << code << "m" << text << "\033[0m";

		return s.str();
	}

	
	std::string bg(int code, std::string text) {
		if (code < 0 || code > 256)
			return text;

		std::stringstream s;
		s << "\033[48;5;" << code << "m" << text << " \033[0m";

		return s.str();
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

		std::cout << std::endl;
	}
}

#endif
