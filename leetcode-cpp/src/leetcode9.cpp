/**
 * Description: https://leetcode.com/problems/palindrome-number/
 */
#include "Common.hpp"

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if((x/10) == 0) return true;
        if((x%10) == 0) return false; 
        int y = 0;
        while (y < x) {
            y = y*10 + x%10;
            x /= 10;
            if((x == y) || (x/10 == y)) return true;
        }
        return false;
    }
};

// This function for running in main(). Overwrite this function to do you test.
void run_solution() {
    std::cout << "Override this function to do your test!" << std::endl;
}