int minValue(Node* root)
{
   if(root==nullptr)  return -1;
   if(root->left!=nullptr)  return minValue(root->left);
   return root->data;
}
