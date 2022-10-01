#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the two numbers= ";
    cin>>a>>b;
    c=a+b;
    if(c>20){
        cout<<"The sum is greater than 20\n";
    }
    else{
        cout<<"The sum is less than 20\n";
    }
    return 0;
}
