/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
   struct Node *temp=head;
    if((head==NULL)||((head->next)==NULL))
        return 0;
   
        for(int i = 0; i < 100; i++) {
        if(temp == NULL) 
            return 0;
         else 
            temp= temp->next;
        }
    return 1;
}
