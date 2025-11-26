/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	int height(TreeNode* _root)
	{
		if (_root == nullptr)
		{
			return -1;
		}

		int mleft;
		int mright;


		mleft = maxDepth(_root->left);
		mright = maxDepth(_root->right);

		return max(mleft, mright);
	}

    int maxDepth(TreeNode* root) {
        return height(root) + 1;
    }
};