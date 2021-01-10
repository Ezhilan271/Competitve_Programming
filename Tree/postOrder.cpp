void solve(Node *root, vector<int> &result)
{
    if(root==nullptr)
        return;
    solve(root->left, result);
    solve(root->right, result);
    result.push_back(root->data);
}
vector<int> postOrder(struct Node *root) {

    vector<int> result;
    solve(root, result);
    return result;
}
