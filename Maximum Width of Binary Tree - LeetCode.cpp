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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL){
          return 0;
        }
      queue<pair<TreeNode*,int>> q;
      q.push({root,0});
      int ans=0;
      while(!q.empty()){
          int s=q.size();
          int m=q.front().second;
          int f=0,l=0;
          for(int i=0;i<s;i++){
          int ind=q.front().second-m;
          TreeNode* temp=q.front().first;
        
          q.pop();
          if(i==0) f=ind;
          if(i==s-1) l=ind;
          if(temp->left!=NULL) q.push({temp->left,(long long)2*ind+1});
          if(temp->right!=NULL) q.push({temp->right,(long long)2*ind+2});
          }
       ans=max(ans,l-f+1);

          

      }
        return ans;
    }
};