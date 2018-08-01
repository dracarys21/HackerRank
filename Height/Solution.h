
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    int l = height (root->left) + 1;
    int r = height (root->right) + 1;
    if (l > r)
        return l;
    return r;
}
  
