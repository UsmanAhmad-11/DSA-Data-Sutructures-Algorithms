#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node * top =NULL;

void traversal(node*ptr){
    cout<<"Elements of linked list are "<<endl;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    
}

int isEmpty (struct node * top){
    if (top==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
int isFull (struct node * top){
    struct node * p = new (node);
    if (p==NULL)
    {
       return 1;
    }else{
        return 0;
    } 
}

struct node* push(struct node *top,int data){
    if (isFull(top)){
        cout<<"Stack overflow"<<endl;
    }
    {
        struct node* n=new (node);
        n->data = data;
        n->next =top;
        top=n;
    }
    
}

// int pop(struct node **top){
int pop(struct node *tp){
    // if (isEmpty(*top))
    if (isEmpty(tp))
    {
        cout<<"Can't be pop because stack is empty"<<endl;
    }else{
    //    struct node* n= *top;
       struct node* n= tp;
    //    *top = (*top)->next;
       top = tp->next;
       int x = n->data;
       free(n);
       return x;
    }
    
}
int atTop(struct node *ptr){
    return top->data;
}
int atBottom(struct node *ptr){
    struct node *s = top;
    while(s->next != NULL){
        s= s->next;
    }
    return s->data;
}
int peek(int position){
    struct node *ptr = top;
    for (int i = 0; (i<position-1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return 0;
    }
}


int main(){
    // struct node * top =NULL;
    top=push(top,5);
    top=push(top,1);
    top=push(top,9);
    top=push(top,8);

    // int element = pop(&top);
    int element = pop(top);
   
    traversal(top);
    cout<<"Pop element is "<<element<<endl;
     cout<<"THe position of element 1 is"<<peek(1);
}