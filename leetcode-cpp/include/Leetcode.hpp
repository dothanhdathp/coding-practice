#include <iostream>

class Solution {
public:
    Solution() {};
    virtual ~Solution() {};
    virtual void executed() {
        std::cout <<  "not implement" <<  std::endl;
    };
};