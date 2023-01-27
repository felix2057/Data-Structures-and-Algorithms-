//Stack pop() and push() operation
#include<stdio.h>
#include<stdlib.h>
 
struct stack{
    int size ;
    int top;
    int * arr;
};
 
int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
            return 1;
        }
        else{
            return 0;
        }
}
 
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}
 
void push(struct stack* ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
 
int main(){
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");
    /*Now let's check if everything is working properly. 
    We’ll first check if the isFull and the isEmpty functions work. 
    Call these functions after declaring the stack sp.

    printf("Before pushing, Full: %d\n", isFull(sp));
    printf("Before pushing, Empty: %d\n", isEmpty(sp));*/
    
    /*The output we received, was:

0
1
PS D:\MyData\Business\code playground\Ds & Algo with Notes\Code>
Figure 1: Output of the above program

So, since the stack is empty, it returned 1. 
Now, let’s push 10 elements into this stack array using the push function. 
And then call the isFull and the isEmpty functions.

    push(sp, 1);
    push(sp, 23);
    push(sp, 99);
    push(sp, 75);
    push(sp, 3);
    push(sp, 64);
    push(sp, 57);
    push(sp, 46);
    push(sp, 89);
    push(sp, 6); // ---> Pushed 10 values 
    // push(sp, 46); // Stack Overflow since the size of the stack is 10
    printf("After pushing, Full: %d\n", isFull(sp));
    printf("After pushing, Empty: %d\n", isEmpty(sp));
Code Snippet 6:  Using the push function

 

The output we received, was:

1
0
PS D:\MyData\Business\code playground\Ds & Algo with Notes\Code>
Figure 2: Output of the above program

 

Since the stack is now full, it returned 1 from isFull function. 
This means our push function is working well. Now, let’s pop some elements.

    printf("Popped %d from the stack\n", pop(sp)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(sp)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(sp)); // --> Last in first out!
Code Snippet 7:  Using the pop function

 

The output we received was:

Popped 6 from the stack
Popped 89 from the stack
Popped 46 from the stack
PS D:\MyData\Business\code playground\Ds & Algo with Notes\Code>
Figure 3: Output of the above program*/
 
    return 0;
}
