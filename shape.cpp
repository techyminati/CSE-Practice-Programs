#include<iostream>
using namespace std;

int main(){
    for(int i=5;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<" "<<j;
        }
        int a=i;
        /*if(a==5){
            cout<<" *";
        }*/
        while(a!=5){
            cout<<" * *";
            a++;
        }
        for(int x=i;x>0;x--){
            cout<<" "<<x;
        }
        cout<<"\n";
    }
    return 0;
}
