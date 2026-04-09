/**
 * Description: https://leetcode.com/problems/permutations/description/
 */
#include "Common.hpp"

using namespace std;

void permute(vector<int>& nums, int k, vector<vector<int>>& ans) {
    if(k >= nums.size()) {
        ans.push_back(nums);
    }
    for(int i=k;i<nums.size(); i++) {
        swap(nums[i], nums[k]);
        permute(nums, k+1, ans);
        swap(nums[i], nums[k]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    permute(nums, 0, ans);
    return ans;
}

// This function for running in main(). Overwrite this function to do you test.
void run_solution() {
    vector<int> input = {1,2,3};
    std::vector<std::vector<int>> output = permute(input);
    test::printf_2d_vector<int>(output, "%d ");
}