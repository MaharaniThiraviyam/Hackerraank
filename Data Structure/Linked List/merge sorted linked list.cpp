/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *a, Node *b)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
   
    if (a == NULL) {
        return b;
    } else if (b == NULL) {
        return a;
    }

    if (a->data < b->data) {
        a->next = MergeLists(a->next, b);
        return a;
    } 
    else {
        b->next = MergeLists(a, b->next);
        return b;
    }

}
