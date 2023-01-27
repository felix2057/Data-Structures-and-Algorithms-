//Stack peek operation
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
 
int peek(struct stack* sp, int i){
    int arrayInd = sp->top -i + 1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}
int main(){
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 50;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");
 
    printf("Before pushing, Full: %d\n", isFull(sp));
    printf("Before pushing, Empty: %d\n", isEmpty(sp));
       
    return 0;
}
/*Code Snippet 2: Implementing the peek function

 

This is how we peek into a stack array. We’ll see how properly the functions work. 
First, we’ll push a few elements into the empty stack we created.

 push(sp, 1);
    push(sp, 23);
    push(sp, 99);
    push(sp, 75);
    push(sp, 3);
    push(sp, 64);
    push(sp, 57);
    push(sp, 46);
    push(sp, 89);
    push(sp, 6);  
    push(sp, 5);  
    push(sp, 75);  
Code Snippet 3: Pushing a few elements in the stack

 

Now, we can peek into this stack array and print all the elements using a loop.

    // Printing values from the stack
    for (int j = 1; j <= sp->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, peek(sp, j));
    }
Code Snippet 4: Calling the peek function

 

The output we received was:

The value at position 1 is 75
The value at position 2 is 5 
The value at position 3 is 6
The value at position 4 is 89
The value at position 5 is 46
The value at position 6 is 57
The value at position 7 is 64
The value at position 8 is 3
The value at position 9 is 75
The value at position 10 is 99
The value at position 11 is 23
The value at position 12 is 1
PS D:\MyData\Business\code playground\Ds & Algo with Notes\Code>
Figure 1: Output of the above program

 

*/