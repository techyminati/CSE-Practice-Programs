#include<iostream>
using namespace std;
int main(){
    int x[10][10],n,q,d,e;
    cout<<"";
    cin>>n>>q;
    for(int i=0;i<n-1;i++){
        for(int a=0;a<q;a++){
            for(int b=0;b<2;b++){
                cout<<"Enter the elements:";
                cin>>x[a][b];
            }
        }
    }
    cout<<"Enter the element you want to retrive: ";
    cin>>d>>e;
    cout<<"Your element is: "<<x[d][e];
    return 0;
}
