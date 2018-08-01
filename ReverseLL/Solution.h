/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* Reverse(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *slow = head;
    Node *fast = slow->next, *save;
    slow->next = NULL;
    while (fast != NULL)
    {
        save = fast->next;
        fast->next = slow;
        slow = fast;
        fast = save;
    }
    return slow;
}
