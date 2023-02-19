103. Binary Tree Zigzag Level Order Traversal

CODE:
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        queue<TreeNode*>q;
        q.push(root);
        int i=0;
        while(!q.empty()){
           int s=q.size();
           vector<int>v;
           while(s--){
               TreeNode * f=q.front();
               v.push_back(q.front()->val);
               q.pop();
               if(f->left)q.push(f->left);
               if(f->right)q.push(f->right);
           }
           if(i++%2)
           reverse(v.begin(),v.end());
           ans.push_back(v);
        }
        return ans;
    }
};
