// @before-stub-for-debug-begin
#include <string>
#include <vector>

#include "commoncppproblem98.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
 *
 * https://leetcode.com/problems/validate-binary-search-tree/description/
 *
 * algorithms
 * Medium (34.54%)
 * Likes:    17753
 * Dislikes: 1416
 * Total Accepted:    2.9M
 * Total Submissions: 8.5M
 * Testcase Example:  '[2,1,3]'
 *
 * Given the root of a binary tree, determine if it is a valid binary search
 * tree (BST).
 *
 * A valid BST is defined as follows:
 *
 *
 * The left subtree of a node contains only nodes with keys less than the
 * node's key.
 * The right subtree of a node contains only nodes with keys greater than the
 * node's key.
 * Both the left and right subtrees must also be binary search trees.
 *
 *
 *
 * Example 1:
 *
 *
 * Input: root = [2,1,3]
 * Output: true
 *
 *
 * Example 2:
 *
 *
 * Input: root = [5,1,4,null,null,3,6]
 * Output: false
 * Explanation: The root node's value is 5 but its right child's value is
 * 4.
 *
 *
 *
 * Constraints:
 *
 *
 * The number of nodes in the tree is in the range [1, 10^4].
 * -2^31 <= Node.val <= 2^31 - 1
 *
 *
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
 public:
  bool isValidBST(TreeNode* root) { return valid(root, nullptr, nullptr); }

  bool valid(TreeNode* node, TreeNode* minNode, TreeNode* maxNode) {
    if (node == nullptr) return true;
    if (minNode && node->val <= minNode->val) return false;
    if (maxNode && node->val >= maxNode->val) return false;
    return valid(node->left, minNode, node) &&
           valid(node->right, node, maxNode);
  }
};
// @lc code=end
