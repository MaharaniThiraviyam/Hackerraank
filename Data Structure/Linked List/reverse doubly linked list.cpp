/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
     struct Node *temp,*temp1,*var;
    temp=head;
    var=NULL;
    while(temp!=NULL)
    {
         temp1=var;
         var=temp;
         temp=temp->next;
         var->next=temp1;
         var->prev=temp;
    }
    head=var;
    return head;
}
