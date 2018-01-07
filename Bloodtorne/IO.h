#pragma once

#include <iostream>
#include <string>

namespace IO {
	void PrintLn(std::string text) {
		std::cout << text << std::endl;
	}

	std::string GetText(std::string question, std::string default_answer) {
		std::string out_str;
		std::cout << question << " ";
		std::getline(std::cin, out_str);
		if (out_str.empty()) {
			out_str = default_answer;
		}
		return out_str;
	}
}
