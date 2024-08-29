/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */ 
 
 void inorder(struct TreeNode* root,int *a,int *i)
 {
     
     if(root!=NULL)
     {
     inorder(root->left,a,i);
     a[*i]=root->val;
     (*i)++;
     inorder(root->right,a,i);
     }
 }
int* inorderTraversal(struct TreeNode* root, int* returnSize){
  int a[1000],i=0;
  inorder(root,a,&i);
  
  int *t=malloc(i*sizeof(int));
  int k=0;
  
  for(k=0;k<i;k++)
  {
      t[k]=a[k];
     // printf("%d ",t[k]);
  }
   *returnSize=k;
  return t;
  

}