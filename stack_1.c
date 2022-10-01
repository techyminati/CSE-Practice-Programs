#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack * ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    return 0;
}

int main(){
    struct stack *s;
    s->size = 6;
    s->top = -1; //Here -1 shows that there are no values inside the stack
    s->arr = (int *)malloc(s->size * sizeof(int));
    //for(int i=0;i<s->size;i++){
    //    printf("Enter the value: ");
    //    scanf("%d\n",s->arr[i]);
    //}

    if(isEmpty(s)){
        printf("The stack is empty\n");
    }
    else{
        printf("Stack is not empty\n");
    }
    if(isFull(s)){
        printf("The stack is full");
    }
    return 0;
}