int solve(Node *root)
{
    if(!root)  return 0;
    int left = solve(root->left);
    int right = solve(root->right);
    int sum = root->data + left + right;
    root->data = left+right;
    return sum;
}
void toSumTree(Node *root)
{
    solve(root);
}
