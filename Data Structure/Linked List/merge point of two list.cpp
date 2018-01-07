/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
   Node *head = headA;
    while(headB->next){
        headB = headB->next;
        while(headA->next){
            headA = headA->next;
            if(headA == headB)
                return headB->data;
        }
        headA = head;
    }
    return headA->data;
}
