#include<iostream>
using namespace std;
int ch(int a,int b){
    if(a>b){
        cout<<" "<<a<<"is greater than"<<b<<" \n";
    }
    else{
        cout<<" "<<b<<"is greater than"<<a<<" \n";
    }
}
int comp(int a,int b, int c){
    if(a>b && a>c){
        cout<<" "<<a<<" is greatest amonngst all";
    }
    else if(b>a && b>c){
        cout<<" "<<b<<" is greatest amongst all";
    }
    else{
        cout<<" "<<c<<" is greatest amonngst all";
    }
}
int main(){
    int a,b,c;
    cout<<"Enter three numbers= ";
    cin>>a>>b>>c;
    ch(a,b);
    comp(a,b,c);
    return 0;
}
