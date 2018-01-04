/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
  Node * newnode = (Node *)malloc(sizeof(Node));
    newnode->data=data;
    Node *temp=head,*prev;
    if(position==0){
        newnode->next=head;
        head=newnode;
        return head;
    }
    else{
        while(position--){
            prev=temp;
            temp=temp->next;
        }
        prev->next=newnode;
        newnode->next=temp;
        return head;
    
    }
}
