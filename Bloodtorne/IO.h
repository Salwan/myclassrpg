#pragma once

#include <iostream>
#include <string>
#include <stdarg.h>

namespace IO {
    const size_t BUFFER_SIZE = 256;
    
    void Print(std::string text, ...) {
        char buffer [BUFFER_SIZE];
        va_list args;
        va_start(args, text);
        vsprintf(buffer, text.c_str(), args);
        std::cout << buffer;
        va_end(args);
    }
    
	void PrintLn(std::string text, ...) {
        char buffer [BUFFER_SIZE];
        va_list args;
        va_start(args, text);
        vsprintf(buffer, text.c_str(), args);
        std::cout << buffer << std::endl;
        va_end(args);
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
    
    void NewLn() {
        std::cout << std::endl;
    }
}
