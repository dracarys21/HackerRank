/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void fun (Node *head, Node *temp)
{
     while (head != NULL)
     {
         temp->next = head;
         head = head->next;
     }
}

Node* MergeLists(Node *headA, Node* headB)
{
    Node *newhead, *temp;
    if (headA == NULL)
    {
        newhead = headB;
        return newhead;
    }
    else if (headB == NULL)
    {
        newhead = headA;
        return newhead;
    }
   if (headA->data < headB->data)
   {
       newhead = headA;
       headA = headA->next;
   }
    else
    {
       newhead = headB;
       headB = headB->next;
    }
    temp = newhead;
    newhead->next = NULL;
    while (headA != NULL && headB != NULL)
    {
        if (headA->data < headB->data)
        {
            temp->next = headA;
            temp = temp->next;
            headA = headA->next;
            temp->next = NULL;
        }
        else
        {
            temp->next = headB;
            temp = temp->next;
            headB = headB->next;
            temp->next = NULL;
        }
    }
    if (headA != NULL)
    {
       fun(headA, temp);
    }
    else
    {
        fun(headB, temp);
    }
    return newhead;
}