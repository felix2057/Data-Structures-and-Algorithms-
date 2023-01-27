//Other stack operations using linked list
#include<stdio.h>
#include<stdlib.h>
 
struct Node{
    int data;
    struct Node * next;
};
 
struct Node* top = NULL;
 
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next; 
    }
}
 
int isEmpty(struct Node* top){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 
int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 
struct Node* push(struct Node* top, int x){
    if(isFull(top)){
        printf("Stack Overflow\n");
    }
    else{
        struct Node* n = (struct Node*) malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
 
int pop(struct Node* tp){
    if(isEmpty(tp)){
        printf("Stack Underflow\n");
    }
    else{
        struct Node* n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x; 
    }
}
 
int peek(int pos){
    struct Node* ptr = top;
    for (int i = 0; (i < pos-1 && ptr!=NULL); i++)
    {
        ptr = ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}
 
int main(){
    top = push(top, 28);
    top = push(top, 18);
    top = push(top, 15);
    top = push(top, 7);
    
    linkedListTraversal(top);
    for (int i = 1; i <= 4; i++)
    {
        printf("Value at position %d is : %d\n", i, peek(i));
    }
    return 0;
}
/*Code Snippet 3: Using peek function

Let’s now push some elements into the stack and see if the operations work all good.

    top = push(top, 28);
    top = push(top, 18);
    top = push(top, 15);
    top = push(top, 7);
Code Snippet 4: Using push function to put some elements inside the stack

Since we have pushed the elements, we can call our peek function in a loop, printing the whole array.

    for (int i = 1; i <= 4; i++)
    {
        printf("Value at position %d is : %d\n", i, peek(i));
    }
Code Snippet 5: Using peek function to print the whole stack

The output we received was:

 
Value at position 1 is : 7
Value at position 2 is : 15
Value at position 3 is : 18
Value at position 4 is : 28
PS D:\MyData\Business\code playground\Ds & Algo with Notes\Code>
Figure 1: Output of the above program*/