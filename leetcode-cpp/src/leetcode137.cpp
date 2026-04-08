#include <vector>
#include "Common.hpp"

using namespace std;

namespace me {
    int singleNumber(vector<int>& nums) {
        std::vector<bool> visited(4294967296ULL, false);
    
        int ans = 0;
        for(size_t i = 0; i < nums.size(); ++i) {
            size_t val = 2147483648ULL+nums[i];
            if(!visited[val]) {
                ans ^= nums[i];
            }
            visited[val] = !visited[val];
        }
        return ans;
    }
}

namespace better {
    int singleNumber(vector<int>& nums) {
        size_t result=0;
        // size_t n=nums.size();
        for(int i=0; i<32; i++){
        size_t sum=0;
        for(size_t num:nums){
            sum+=(num>>i)&1;
        }
        if(sum%3!=0){
            result=result|(1<<i);
        }
        }
        return result;
    }
}

void run_solution() {
    std::cout << "--- Leetcode 137 ---" << std::endl;
    vector<vector<int>> input {
        {2,2,3,2},
        {0,1,0,1,0,1,99},
    };
    vector<int> expect {3,99};

    test::do_compare<vector<int>&, int>(input[0], expect[0], me::singleNumber);
    test::do_compare<vector<int>&, int>(input[1], expect[1], me::singleNumber);
}