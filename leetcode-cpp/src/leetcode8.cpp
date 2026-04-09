/**
 * Description: https://leetcode.com/problems/string-to-integer-atoi/description/
 */

#include "Common.hpp"

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long out = 0;
        int count = 0;
        int sign = 0; // 0=not set; 1: '+'; 2: '-'
        bool quit = false;
        for(char c:s) {
            if(quit) break;
            switch (c)
            {
                case ' ':
                    if(0==count && !sign) {
                        break;
                    } else {
                        quit = true;
                        break;
                    }
                case '0':
                    if(0==count) {
                        sign = ((sign!=2)?1:2);
                        break;
                    }
                case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':
                    if(11 > count) {
                        out = (c-48) + out*10;
                        ++count;
                        break;
                    } else {
                        quit = true;
                    }
                case '+':
                case '-':
                    if(0==count && !sign) {
                        if('+'==c) sign=1;
                        if('-'==c) sign=2;
                        break;
                    } else {
                        quit = true;
                    }
                default:
                    quit = true;
                    break;
            }
        }
        if(count>9) {
            if(2==sign) {
                if(2147483648<out) return -2147483648;
            } else {
                if(2147483647<=out) return 2147483647;
            }
        }
        return ((2==sign)?-1:1)*out;
    }
};

// This function for running in main(). Overwrite this function to do you test.
void run_solution() {
    std::cout << "Override this function to do your test!" << std::endl;
}