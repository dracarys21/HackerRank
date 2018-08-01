/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
    int i = 0;
    while (i < s.size())
    {
        node *p = root;
        while (p->data == '\0')
        {
            if (s[i] == '0')
            {
                i++;
                p = p->left;
            }
            else
            {
                p = p->right;
                i++;
            }
        }
        cout<<p->data;
    }
}
