#ifndef _IO_H_
#define _IO_H_

#include <iostream>
#include <string>
#include <stdarg.h>

namespace IO {
    static const size_t BUFFER_SIZE = 256;
    
    static void Print(std::string text, ...) {
        char buffer [BUFFER_SIZE];
        va_list args;
        va_start(args, text);
        vsprintf(buffer, text.c_str(), args);
        std::cout << buffer;
        va_end(args);
    }
    
	static void PrintLn(std::string text, ...) {
        char buffer [BUFFER_SIZE];
        va_list args;
        va_start(args, text);
        vsprintf(buffer, text.c_str(), args);
        std::cout << buffer << std::endl;
        va_end(args);
	}

	static std::string GetText(std::string question, std::string default_answer) {
		std::string out_str;
		std::cout << question << " ";
		std::getline(std::cin, out_str);
		if (out_str.empty()) {
			out_str = default_answer;
		}
		return out_str;
	}
    
    static void NewLn() {
        std::cout << std::endl;
    }
}

#endif
