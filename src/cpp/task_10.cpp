/*
 * Author:
 * Date:
 * Name:
 */

class Problem10 {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        // write your code here
        vector<double> avg;

        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);

        TreeNode *curr;
        double sum = 0, n = 0;
        while (!q.empty()) {
            curr = q.front();
            q.pop();

            if (!curr) {
                avg.push_back(sum/n);
                sum = 0; n = 0;

                if (!q.empty()) q.push(nullptr);
            }
            else {
                sum += curr->val; n++;
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }

        }

        return avg;
    }
};