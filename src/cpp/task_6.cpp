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
        if(root==nullptr) return false;
        tsum-=root->val;
        if(root->left==nullptr && root->right==nullptr && tsum==0) return true;
        return hasPathSum(root->left,tsum) || hasPathSum(root->right,tsum);
    }
};