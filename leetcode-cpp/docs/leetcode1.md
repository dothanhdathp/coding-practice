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

$2$ <= **nums.length** <= $10^4$
-109 <= **nums[i]** <= 109
$-10^9$ <= **target** <= $10^9$
Only one valid answer exists.