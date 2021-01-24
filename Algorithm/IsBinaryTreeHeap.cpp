bool isHeap(Node * tree)
{
    // Your code here
    if(tree==NULL)
        return true;
    if((tree->left!=NULL&&tree->data<tree->left->data)
        ||(tree->right!=NULL&&tree->data<tree->right->data))
            return false;
    
    return isHeap(tree->left)&&isHeap(tree->right);
}
