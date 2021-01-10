void solve(Node *root, vector<int> &result)
{
    if(root==nullptr)
        return;
    result.push_back(root->data);
    solve(root->left, result);
    solve(root->right, result);
}
vector<int> preorder(struct Node *root) {

    vector<int> result;
    solve(root, result);
    return result;
}
