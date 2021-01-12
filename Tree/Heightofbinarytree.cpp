class Solution{
    public:
    int height(struct Node* node){
        // code here 
        if (node== NULL) return 0;
        else{
        int lheight = height(node -> left);
        int rheight = height(node -> right);
 
      /* use the larger one */
        if (lheight > rheight) return (lheight + 1);
        else return (rheight + 1);
        }
    }
};
