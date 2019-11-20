/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
         if(!root) 
         return NULL;
        if(!root->right&&!root->left)
                    return root;
        TreeNode *l,*r;
        l=invertTree(root->left);
        r=invertTree(root->right);
        root->left=r;
        root->right=l;
        return root;
    }
};
//if there is no existance of second node of binary tree then only return the same 
// tree with no any change
