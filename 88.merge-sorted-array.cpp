// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem88.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 *
 * https://leetcode.com/problems/merge-sorted-array/description/
 *
 * algorithms
 * Easy (51.57%)
 * Likes:    15841
 * Dislikes: 2127
 * Total Accepted:    3.9M
 * Total Submissions: 7.6M
 * Testcase Example:  '[1,2,3,0,0,0]\n3\n[2,5,6]\n3'
 *
 * You are given two integer arrays nums1 and nums2, sorted in non-decreasing
 * order, and two integers m and n, representing the number of elements in
 * nums1 and nums2 respectively.
 *
 * Merge nums1 and nums2 into a single array sorted in non-decreasing order.
 *
 * The final sorted array should not be returned by the function, but instead
 * be stored inside the array nums1. To accommodate this, nums1 has a length of
 * m + n, where the first m elements denote the elements that should be merged,
 * and the last n elements are set to 0 and should be ignored. nums2 has a
 * length of n.
 *
 *
 * Example 1:
 *
 *
 * Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
 * Output: [1,2,2,3,5,6]
 * Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
 * The result of the merge is [1,2,2,3,5,6] with the underlined elements coming
 * from nums1.
 *
 *
 * Example 2:
 *
 *
 * Input: nums1 = [1], m = 1, nums2 = [], n = 0
 * Output: [1]
 * Explanation: The arrays we are merging are [1] and [].
 * The result of the merge is [1].
 *
 *
 * Example 3:
 *
 *
 * Input: nums1 = [0], m = 0, nums2 = [1], n = 1
 * Output: [1]
 * Explanation: The arrays we are merging are [] and [1].
 * The result of the merge is [1].
 * Note that because m = 0, there are no elements in nums1. The 0 is only there
 * to ensure the merge result can fit in nums1.
 *
 *
 *
 * Constraints:
 *
 *
 * nums1.length == m + n
 * nums2.length == n
 * 0 <= m, n <= 200
 * 1 <= m + n <= 200
 * -10^9 <= nums1[i], nums2[j] <= 10^9
 *
 *
 *
 * Follow up: Can you come up with an algorithm that runs in O(m + n) time?
 *
 */

// @lc code=start
class Solution {
 public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // std
    // Your runtime beats 100 % of cpp submissions
    // Your memory usage beats 70.49 % of cpp submissions (12.3 MB)
    // nums1.resize(m);
    // nums1.reserve(n);
    // if (n > 0) nums1.insert(nums1.end(), nums2.begin(), nums2.begin() + n);
    // sort(nums1.begin(), nums1.end(), [](int a, int b) { return a < b; });

    // from the back of the nums1
    // 1,2,3,0,0,0
    // 2,5,6
    for (int i = m - 1, j = n - 1, k = m + n - 1; j >= 0; k--) {
      nums1[k] = (i >= 0 && nums1[i] > nums2[j]) ? nums1[i--] : nums2[j--];
    }
  };
};
// @lc code=end
