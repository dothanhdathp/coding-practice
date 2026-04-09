/**
 * Description: https://leetcode.com/problems/reverse-integer/description/
 */
#include "Common.hpp"
#include <climits>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x!=0) {
            int last = x%10;
            x /= 10;
            if ((ans > INT_MAX/10) || ((ans == INT_MAX/10) && (last > 7))) return 0;
            if ((ans < INT_MIN/10) || ((ans == INT_MIN/10) && (last < -8))) return 0;
            ans = ans*10 + last;
        }
        return ans;
    }
};

// This function for running in main(). Overwrite this function to do you test.
void run_solution() {
    std::cout << "Override this function to do your test!" << std::endl;
}