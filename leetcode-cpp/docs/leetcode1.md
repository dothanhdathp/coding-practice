---
marp: true
---


# Two Sum

_[Leetcode 1](https://leetcode.com/problems/two-sum/description/)_

---

## Yêu Cầu

Cho một mảng các số nguyên và một số nguyên, và một số nguyên đich. **trả về chỉ số của hai số** sao cho chúng cộng lại với bằng với số nguyên đích.

_Bạn có thể giả định rằng mỗi đầu vào sẽ có <u>chính xác một giải pháp</u> và bạn không được sử dụng cùng một phần tử hai lần._

**Bạn có thể trả lời câu trả lời theo bất kỳ thứ tự nào.**

---

### Example 1

Đầu vào: `nums = [2,7,11,15]`, `target = 9`
Kết quả: `[0,1]`
Giải thích: Bởi vì `nums[0] + nums[1] == 9`, nên ta có thể trả về `[0, 1]`.

---

### Example 2

Input: nums = [3,2,4], target = 6
Output: [1,2]

### Example 3

Input: nums = [3,3], target = 6
Output: [0,1]

---

## Hạn chế

- $2 \leqq nums.length \leqq 10^4$
- $-10^9 \leqq nums[i] \leqq 10^9$
- $-10^9 \leqq target \leqq 10^9$
- **Chỉ có một câu trả lời hợp lệ tồn tại.**

---

## Giải Thuật

Ở đây sử dụng **unordered_map** để giải

1. Với mỗi số đọc được từ trong dữ liệu đầu vào, ví dụ giá trị là `a`
1. Tính `b=target-a` và lưu vào `unordered_map` cặp `{b,index}`
1. Sau đó với số `a'` tiếp theo, tính `b'`
1. Nếu `b'` tồn tại trong bảng (`b' == b`), trả ra cặp của **vị trị hiện tại** với vị trí được lưu tại `b` trong `unordered_map`.

---

## Code

```cpp
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
```