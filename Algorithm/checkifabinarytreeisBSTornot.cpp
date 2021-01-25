bool isBST(struct node* node)  
{  
  if (node == NULL)  
    return true;  
  if (node->left!=NULL && node->left->data>node->data)  return flase;  
  if (node->right!=NULL && node->right->data<node->data)  return flase;  
  if (!isBST(node->left) || !isBST(node->right))  return false;  
  return true;  
} 
