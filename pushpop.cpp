#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    cout<<"The Initial string is: ";
    cout<<str<<endl;

    str.push_back('s'); //this push_back function is to add new char in end of the string.
    cout<<"New string is: "<<str<<endl;

    str.pop_back(); //This function is used to pop one word in the last of the string;
    cout<<"New string: "<<str<<endl;

    return 0;
}
