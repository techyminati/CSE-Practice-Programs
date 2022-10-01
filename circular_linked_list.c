#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedlist(struct Node * head){
    struct Node * ptr=head;
    do{
        printf("%d\n", ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}

struct Node * insertfirst(struct Node * head,int data){
    struct Node * ptr= (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p = head->next;
    while(p->next != head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}

struct Node * indexbetween(struct Node * head, int index,int data){
    struct Node * ptr= (struct Node *)malloc(sizeof(struct Node));
    struct Node * p=head;
    int i=0;
    while(i !=index-1){
        p = p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    //ptr->next=head;
    //head=ptr;
    return head;
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    //Here we dynamically allocated the memory
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    //linking head with second node
    head->data=7;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=9;
    third->next=fourth;

    fourth->data=10;
    fourth->next=head;

    printf("Traverseal linked list \n");
    linkedlist(head);
    printf("Insertion at first\n");
    //insertfirst(head,50);
    printf("Insertion in between\n");
    indexbetween(head,5,48);
    linkedlist(head);
    return 0;
}