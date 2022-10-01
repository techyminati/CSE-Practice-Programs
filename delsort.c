#include<stdio.h>
//void del(int,int);
//void display(int);
void del(int arr[],int n){
    for(int i=0;i<6;i++){
        if(arr[i]==n){
            for(int j=i;j<n;j++){
                arr[j]=arr[j+1];
            }
        }
        break;
    }
}

void display(int arr[]){
    for(int i=0;i<6;i++){
        printf("%d\n",&arr[i]);
    }
}
int main(){
    int a,arr[6]={2,3,5,7,9};
    printf("Enter the element you want to remove: ");
    scanf("%d",&a);
    del(arr,a);
    display(arr);
    return 0;
}
