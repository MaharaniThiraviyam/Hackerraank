
/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
     struct Node *newnode, *temp;


     newnode=(struct Node *)malloc(sizeof(struct Node));
     newnode->data=data;newnode->next=NULL;
    if(head==NULL)
        head=newnode;
    else{
        temp=head;
         while(temp->next!= NULL)
               temp=temp->next;
               temp->next=newnode;

    }
        return head;
}
