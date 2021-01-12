int solve(Node*root)
{
    if(root==NULL)
    return 0;
    if(root->left==NULL && root ->right==NULL)  return root->data;
    int l=f(root->left);
    int r=f(root->right);
    if(l+r==root->data)  return l+r+root->data;
    else  return 0;
    
    
}
bool isSumTree(Node* root)
{
    if(root==NULL)
    return 1;
    return solve(root);
    
    
}
