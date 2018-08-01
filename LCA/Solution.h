/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * lca(node * root, int v1,int v2)
{
    node *p = root;
    int bigger = (v1 > v2) ? v1 : v2;
    int smaller = (v1 < v2) ? v1 : v2;
    while (bigger < p->data || smaller > p->data)
    {
        if (bigger < p->data)
            p = p->left;
        if (smaller > p->data)
            p = p->right;
    }
    return p;
}

