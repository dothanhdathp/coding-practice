#include <iostream>
#include <cstdio>
#include <functional>

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"
#define BOLD    "\033[1m"

#define COLOR_PRINT(C, ftm, ...) printf(C ftm "\n" RESET, ##__VA_ARGS__);

namespace test {
    template<typename A, typename B>
    void do_compare(A input, B output, std::function<B(A)> fn = nullptr, int idx=0) {
        // std::cout << "--- Test " << num << " ---" << std::endl;
        printf("[ TEST %3d ] ", idx);
        if(fn(input) == output) {
            COLOR_PRINT(GREEN, "PASS");
        } else {
            COLOR_PRINT(RED, "FALSE");
        }
    };
}