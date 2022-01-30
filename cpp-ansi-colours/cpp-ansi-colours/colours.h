#pragma once
#include <sstream>

#ifndef COLOURS_H
#define COLOURS_H

namespace ansi {

	enum BaseColours : int {
		DEFAULT = 0,
		GREY = 8,
		RED = 9,
		GREEN = 10,
		YELLOW = 11,
		BLUE = 12,
		MAGENTA = 13,
		CYAN = 14,
		WHITE = 15,
		BLACK = 16,
	};


	// Add further...?
	enum ExtendedColours : int {
		INDIGO = 57,
		BROWN = 130,
		ORANGE = 202,
		PINK = 207
	};


	enum Formats : int {
		BOLD_BRIGHT = 1,
		DIM = 2,
		UNDERLINE = 4,
		BLINK = 5,
		INVERT = 7,
		HIDDEN = 8
	};

	
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
		s << "\033[48;5;" << code << "m" << text << "\033[0m";

		return s.str();
	}


	std::string format(int code, std::string text) {		
		if (code < 1 || code == 3 || code == 6)
			return text;

		std::stringstream s;
		s << "\033[" << code << "m" << text << "\033[0m";

		return s.str();
	}

	
	void printColourCodes256() {
		const char* pad = "";

		for (int c = 0; c <= 256; c++) {
			if (c < 10)
				pad = "   ";
			else if (c < 100)
				pad = "  ";
			else
				pad = " ";

			if (c % 10 == 0 && c != 0)
				std::cout << std::endl;

			std::cout << fg(c, std::to_string(c) + pad);
		}

		std::cout << std::endl;
		pad = "";

		for (int c = 0; c <= 256; c++) {
			if (c < 10)
				pad = "   ";
			else if (c < 100)
				pad = "  ";
			else
				pad = " ";

			if (c % 10 == 0 && c != 0)
				std::cout << std::endl;

			std::cout << bg(c, fg(WHITE, std::to_string(c) + pad));
		}

		std::cout << std::endl;
	}
}

#endif
