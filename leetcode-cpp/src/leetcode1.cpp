#include "Common.hpp"

/**
 * This function for running in main()
 * Overwrite this function to do you test.
 */

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> umap;
    for(int i{0};i<nums.size();++i)
    {
        auto it = umap.find(nums[i]);
        if(it!=umap.end())
        {
            return {i, it->second};
        } else {
            umap[target-nums[i]]=i;
        }
    }
    return {};
}

void run_solution() {
    std::vector<std::vector<int>> input_0 = {
        {2,7,11,15},
        {3,2,4},
        {3,3}
    };
    std::vector<int> input_1 = {
        9,
        6,
        6
    };
    
    for(size_t idx=0; idx < input_0.size(); ++idx) {
        auto ans = twoSum(input_0[idx], input_1[idx]);
        test::printf_vector<int>(ans, "%d, ");
    }
}