// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem189.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 *
 * https://leetcode.com/problems/rotate-array/description/
 *
 * algorithms
 * Medium (43.15%)
 * Likes:    19634
 * Dislikes: 2114
 * Total Accepted:    3.2M
 * Total Submissions: 7.5M
 * Testcase Example:  '[1,2,3,4,5,6,7]\n3'
 *
 * Given an integer array nums, rotate the array to the right by k steps, where
 * k is non-negative.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [1,2,3,4,5,6,7], k = 3
 * Output: [5,6,7,1,2,3,4]
 * Explanation:
 * rotate 1 steps to the right: [7,1,2,3,4,5,6]
 * rotate 2 steps to the right: [6,7,1,2,3,4,5]
 * rotate 3 steps to the right: [5,6,7,1,2,3,4]
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [-1,-100,3,99], k = 2
 * Output: [3,99,-1,-100]
 * Explanation:
 * rotate 1 steps to the right: [99,-1,-100,3]
 * rotate 2 steps to the right: [3,99,-1,-100]
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= nums.length <= 10^5
 * -2^31 <= nums[i] <= 2^31 - 1
 * 0 <= k <= 10^5
 *
 *
 *
 * Follow up:
 *
 *
 * Try to come up with as many solutions as you can. There are at least three
 * different ways to solve this problem.
 * Could you do it in-place with O(1) extra space?
 *
 *
 */

// @lc code=start
class Solution {
 public:
  void rotate(vector<int>& nums, int k) {
    int real_k = k % nums.size();
    if (nums.size() == real_k) {
      return;
    }
    if (real_k == 0) {
      return;
    }
    // dont understand why this is not working
    // nums.insert(nums.begin(), nums.end() - real_k, nums.end());
    // nums.erase(nums.end() - real_k, nums.end());
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + real_k);
    reverse(nums.begin() + real_k, nums.end());
  }
};
// @lc code=end
