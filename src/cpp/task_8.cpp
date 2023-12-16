/*
 * Author:
 * Date:
 * Name:
 */

class Problem8 {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // write your code here
        vector<int> result;
        helper(root, result);
        return result;
    }

    void helper(TreeNode* root, vector<int>& result) {
        // write your code here
        if (root != nullptr) {
            helper(root->left, result);
            result.push_back(root->val);
            helper(root->right, result);
        }
    }
};
