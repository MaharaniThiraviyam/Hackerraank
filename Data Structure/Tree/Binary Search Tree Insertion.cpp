/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value) {

 node *temp,*t,*p;
    temp=new node;
    temp->data=value;
    temp->left=NULL;
    temp->right=NULL;
    
    if(root==NULL)
       root=temp;
    else{
    t=root;
    while(t!=NULL){
        p=t;
        if(t->data<value)
            t=t->right;
        else
            t=t->left;
     }
    if(p->data<value)
        p->right=temp;
    else
        p->left=temp;
    }
    return root;
}
 
