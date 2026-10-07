#include<iostream>
using namespace std;

class TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(val){
    this->val = val;
  }
}
pair<int,int> func(int ans,TreeNode *root){
  if(!root)return {0,0};

  pair<int,int> l = func(ans,root ->left);
  pair<int,int> r = func(ans,root->right);
  int nodesum = root->val + l.first+r.first;
  int nodecount  = l.second + r.second + 1;
  if(root->val  = (nodesum)/(nodecount)){
    ans++;
  }
  return {nodesum,nodecount};
}
int averageOfSubtree(TreeNode* root) {
    if(!root)return 0;
    int ans = 0;
     func(ans,root);
     return ans;

}
int main(){
   
}
