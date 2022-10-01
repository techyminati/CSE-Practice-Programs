#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
}; 

int isFull(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow");
    }
    ptr->top++;
    ptr->arr[ptr->top]=val;
}

int isEmpty(struct stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return  0;
}

void pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("stack underflow");
    }
    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
}

int main(){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));

    sp->size=8;
    sp->top=-1;
    sp->arr=(int *)malloc(sizeof(int)* sp->arr);
    isFull(sp);
    isEmpty(sp);
    push(sp,55);
    pop(sp);

    return 0;
}
