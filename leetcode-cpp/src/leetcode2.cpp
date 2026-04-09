/**
 * Description: https://leetcode.com/problems/add-two-numbers/description/
 */

#include "Common.hpp"

using namespace std;

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    std::stack<int> ls1;
    std::stack<int> ls2;

    while(l1 != nullptr) {
        ls1.push(l1->val);
        l1 = l1->next;
    }
    while(l2 != nullptr) {
        ls2.push(l2->val);
        l1 = l2->next;
    }

    ListNode *ans = nullptr;
    int im = 0;
    int re = 0;
    if(ls1.empty() && ls2.empty()) {
        std::cout << "do" << std::endl;
        // int a = ls1.empty() ? 0 : ls1.top();
        // int b = ls2.empty() ? 0 : ls2.top();
        // int c = a + b + im;
        // re = c%10;
        // im = c/10;
        // if(ans == nullptr) {
        //     ans = new ListNode(re);
        // } else {
        //     ans = new ListNode(re, ans);
        // }
        // ls1.pop();
        // ls2.pop();
    } else {
        std::cout << "not do" << std::endl;
    }
    return ans;
}

// This function for running in main(). Overwrite this function to do you test.
void run_solution() {
    std::cout << "Override this function to do your test!" << std::endl;
}