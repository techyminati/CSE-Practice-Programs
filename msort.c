#include<stdio.h>
int main(){
    int a[]={1,3,5,7,9};
    int b[]={2,4,5,8,10};
    int c[10],k=0,i,j;
    while(i<5 && j<5){
            if(a[i]>b[j]){
                c[k]=b[j];
                j++;
                k++;
            }
            else if(a[i]==b[j]){
                c[k]=a[i];
                i++;
                k++;
                c[k]=b[j];
                j++;
                k++;
            }else{
                c[k]=a[i];
                i++;
                k++;
            }
    }
    while(i<5){
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<5){
        c[k]=b[j];
        k++;
        j++;
    }
    for(int g=0;g<10;g++){
        printf("%d\n",c[g]);
    }
    return 0;
}
