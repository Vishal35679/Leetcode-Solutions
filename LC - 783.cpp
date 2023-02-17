783. Minimum Distance Between BST Nodes

CODE:
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
 #include <vector>
class Solution {
public:
    vector<int> value;
    void inorder(TreeNode* root)
    {
        if(root == NULL) return ;
        inorder(root -> left);
        value.push_back(root-> val);
        inorder(root -> right);
    }
    int minDiffInBST(TreeNode* root) {
        // return 1;
        inorder(root);
        int ans = INT_MAX;
        sort(value.begin(), value.end());
        // ans = value[1] - value[0];
        for(int i=0; i+1<value.size(); ++i){  
             if(value[i+1]-value[i]<ans){
                ans= value[i+1]- value[i];
             }
        }
        return ans;
    }
};
