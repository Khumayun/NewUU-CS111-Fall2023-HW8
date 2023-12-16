/*
 * Author:
 * Date:
 * Name:
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Problem6 {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        // write your code here
    }
};