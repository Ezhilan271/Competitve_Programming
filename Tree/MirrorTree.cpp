void mirror(Node* node) 
{
     // Your Code Here
     if(node==nullptr)
        return ;
     mirror(node->right);
     mirror(node->left);
     Node* temp=node->right;
     node->right = node->left;
     node->left = temp;
}
