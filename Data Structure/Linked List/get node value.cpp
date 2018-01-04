/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    int i=1,count=0;
     struct Node *temp;

    temp=head;
    while(temp!=NULL){
        temp=temp->next;count++;
}
    count-=positionFromTail;
    temp=head;
    while(i++!=count)
        temp=temp->next;
    return temp->data;
    
    
}
