int cnt,ans;
void solve(Node *root,int k)
{
    if(root)
    {
        solve(root->left,k);
        cnt++;
        if(cnt==k)
        {
            ans=root->data;
            return ;
        }
        
        solve(root->right,k);
    }
}
int KthSmallestElement(Node *root, int k)
{
    cnt=0;ans=-1;
    solve(root,k);
    return ans;
    //add code here.
}
