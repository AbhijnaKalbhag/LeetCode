/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 void inorder(struct TreeNode* root,int *a,int *i)
 {
     
     if(root!=NULL)
     {
     inorder(root->left,a,i);
     a[*i]=root->val;
    // printf("%d ",a[*i]);
     (*i)++;
     inorder(root->right,a,i);
     }
 }
int check(int a[],int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
      printf("-->%d %d\n",a[i],b[i]);
        if(a[i]!=b[i])
        {
            printf("@@ %d %d\n",a[i-1],b[i-1]);
             printf("**%d %d\n %d",a[i],b[i],i);
            return 0;
        }
    }
    return 1;
}
bool isSameTree(struct TreeNode* p, struct TreeNode* q){
 if(p==NULL&&q==NULL)
 {
     return 1;
 }
 if(p!=NULL&&q==NULL)
 {
     
     return 0;
 }
 if(p==NULL&&q!=NULL)
 {
    
     return 0;
 }
 int a[10000],b[10000];
int i,j;
inorder(p,a,&i);
printf("\n");
inorder(q,b,&j);
printf("\n");
int flag;
if(i==1 && j==1)
{
   
    if(a[0]==b[0])
    {
        return 1;
    }
    else
    {
         printf("** %d %d",a[0],b[0]);
        return 0;
    }
}

if(i!=j)
{
    for(i=0;i<j;i++)
 {
    printf("---%d---%d\n",a[i],b[i]);
 }

    return 0;
}


 flag=check(a,b,j);
  for(i=0;i<j;i++)
 {
     a[i]=0;
     b[i]=0;
 }
 ///fflush(a);
 ///fflush(b); 
return flag ;

}