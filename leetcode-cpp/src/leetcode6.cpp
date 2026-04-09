/**
 * Description: https://leetcode.com/problems/zigzag-conversion/
 */
#include "Common.hpp"

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if((numRows==s.length())||(numRows==1)) return s;
        string ans;
        ans.reserve(1001);
        int N = numRows-1;
        int pos = 0;
        for(int j{0};j<numRows;++j) {
            for(int i{0};;++i) {
                int a = i%N; int b = i/N;
                if(a) {
                    if((N-a)==(j%N)) {
                        pos = (2*b+1)*N + a;
                        // pos = 2*i+N+a;
                        if(pos<s.length()) {
                            ans += s[pos];
                        } else {break;}
                    }
                } else {
                    pos = j+b*2*N;
                    if(pos<s.length()) {
                        ans += s[pos];
                    } else {break;}
                }
            }
        }
        return ans;
    }
};

// This function for running in main(). Overwrite this function to do you test.
void run_solution() {
    std::cout << "Override this function to do your test!" << std::endl;
}