/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    Node *nodeToInsert = new Node;
    nodeToInsert -> data = data;
    nodeToInsert -> next = nodeToInsert -> prev = NULL;
    Node *traversePtr = head;
    if(head == NULL)
        return nodeToInsert;
    while (true) {
        if (traversePtr -> data > data)
            break;
        if (traversePtr -> next != NULL)
            traversePtr = traversePtr -> next;
        else
            break;
    }
    if(traversePtr -> next == NULL && traversePtr -> data < data) {
        traversePtr -> next = nodeToInsert;
        nodeToInsert -> prev = traversePtr;
        return head;
    }
    if(traversePtr == head) {
        nodeToInsert -> next = traversePtr;
        traversePtr -> prev = nodeToInsert;
        return nodeToInsert;
    }
    
    nodeToInsert -> prev = traversePtr -> prev;
    nodeToInsert -> next = traversePtr;
    traversePtr -> prev -> next = nodeToInsert;
    traversePtr -> prev = nodeToInsert;
    return head;
    
}
