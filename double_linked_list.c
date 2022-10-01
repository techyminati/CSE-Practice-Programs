#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * prev;
    struct Node * next;
};

void doubleylist(struct Node * N1){
    
    struct Node * p=N1;
    struct Node * q=(struct Node *)malloc(sizeof(struct Node));

    while(p->next!=N1){
        printf("%d\n", p->data);
        p=p->next;
        p->next=q;
    }
    while (q!=NULL){
        q=q->next;
    }
    do{
        printf("%d\n",q->data);
        q=q->prev;
    }while(q->prev!=NULL);
    
}

int main(){

    struct Node * N1;
    struct Node * N2;
    struct Node * N3;
    struct Node * N4;

    N1=(struct Node *)malloc(sizeof(struct Node));
    N2=(struct Node *)malloc(sizeof(struct Node));
    N3=(struct Node *)malloc(sizeof(struct Node));
    N4=(struct Node *)malloc(sizeof(struct Node));

    N1->prev=NULL;
    N1->data=6;
    N1->next=N2;

    N2->prev=N2->next;
    N2->data=7;
    N2->next=N3;

    N3->prev=N3->next;
    N3->data=8;
    N3->next=N4;

    N4->prev=N4->next;
    N4->data=9;
    N4->next=NULL;

    doubleylist(N1);
    return 0;
}