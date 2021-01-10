void solve(Node *root, vector <int> &result)
{
    if (root == nullptr)
        return;
    solve(root->left, result);
    result.push_back (root->data);
    solve(root->right, result);
}
vector <int> inOrder(struct Node *root) {

    vector <int> result;
    solve(root, result);
    return result;
}
