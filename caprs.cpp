#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    cout<<"Intial String is: "<<str<<endl;

    str.resize(13);
    cout<<"New strinf after resize is: "<<str<<endl;

    cout<<"Capacity of string is: "<<str.capacity()<<endl;

    cout<<"The length os the string is: "<<str.length()<<endl;

    str.shrink_to_fit();

    cout<<"New size after shrinking is: "<<str.capacity()<<endl;

    return 0;
}
