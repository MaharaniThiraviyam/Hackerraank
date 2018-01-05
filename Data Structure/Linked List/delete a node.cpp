/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    struct Node *temp=head,*prev;
    if(position==0)
           head=head->next;
    
    else{
        while(position--)
        {
            prev=temp;
            temp=temp->next;
      }
        prev->next=temp->next;
    }
       return head; 
}
