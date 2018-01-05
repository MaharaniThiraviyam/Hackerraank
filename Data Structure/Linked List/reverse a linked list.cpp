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
  // Complete this method
    struct Node *temp,*temp1,*var;
    temp=head;
    var=NULL;
    while(temp!=NULL)
    {
         temp1=var;
         var=temp;
         temp=temp->next;
         var->next=temp1;
    }
    head=var;
    return head;
}
