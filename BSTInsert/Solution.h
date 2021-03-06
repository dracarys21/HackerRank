/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
    if (root == NULL)
    {
        node *p = new node;
        p->data = value;
        p->left = p->right = NULL;
        return p;
    }
    if (value < root->data)
        root->left = insert (root->left, value);
    else
        root->right = insert (root->right, value);
    return root;
}
