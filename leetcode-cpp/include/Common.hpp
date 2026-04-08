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
    /**
     * @typedef A: type of input
     * @typedef B: type of input
     * @param input: your input of function test
     * @param expect: your expect value (result)
     * @param fn: function do action test
     * @param idx: index of test. Default equal 0
     */
    template<typename A, typename B>
    void do_compare(A input, B expect, std::function<B(A)> fn = nullptr, int idx=0) {
        // std::cout << "--- Test " << num << " ---" << std::endl;
        printf("[ TEST %3d ] ", idx);
        if(fn(input) == expect) {
            COLOR_PRINT(GREEN, "PASS");
        } else {
            COLOR_PRINT(RED, "FALSE");
        }
    };

    /** Support print vector */
    template<typename T>
    void printf_vector(std::vector<T> &vec, const char* mnt)
    {
        for(T var : vec) {
            printf(mnt, var);
        }
        printf("\n");
    }

    /** Support print 2D vector */
    template<typename T>
    void printf_2d_vector(std::vector<std::vector<T>> &vec, const char* mnt)
    {
        for(auto V : vec) {
            for(T var : V) {
                printf(mnt, var);
            }
            printf("\n");
        }
        printf("\n");
    }
}

template <typename... Args>
void println(Args... args) {
    (std::cout << ... << args) << std::endl; // C++17 Fold Expression
}