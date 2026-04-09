/**
 * Description: https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
 */

#include "Common.hpp"

using namespace std;

int lengthOfLongestSubstring(string s) {
    if(s.length()<2) return s.length();
    unordered_map<char, bool> mmap;
    int temp = 1;
    int ans = 1;
    mmap[s[0]]=true;
    for(int i{1};i<s.length();++i) {
        if(s[i]==s[i-temp]) {
            continue;
        } else {
            if(mmap[s[i]]) {
                temp=1;
                mmap.clear();
                mmap[s[i]]=true;
                for(int j=1;j<ans;++j) {
                    if(s[i]==s[i-j]) break;
                    mmap[s[i-j]]=true;
                    ++temp;
                }
            } else {
                ++temp;
                mmap[s[i]]=true;
                ans = max(temp, ans);
            }
        }
    }
    return ans;
}

// This function for running in main(). Overwrite this function to do you test.
void run_solution() {
    std::cout << "Override this function to do your test!" << std::endl;
}