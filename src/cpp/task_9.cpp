/*
 * Author:
 * Date:
 * Name:
 */

class Problem9 {
public:
    int maxDepth(TreeNode* root) {
        // write your code here
        if(root == NULL) return 0;
            return 1 + max(maxDepth(root->left),maxDepth(root->right));
    }
};