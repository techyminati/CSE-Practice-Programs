#include<iostream>
using namespace std;
 
int main(){
    string str = "geekforgeeks";
    std::string::iterator it;

    std::string::reverse_iterator it1;
    //Here this loop will show string form begning to end.
    cout<<"The string using forward iteratorr is: ";
    for(it=str.begin();it!=str.end();it++){
        cout<<*it;
    }
    cout<<endl;
    //Here it will show from ending to brgining 0f loop.
    cout<<"The reverse string using reverse iterator is: ";
    for(it1=str.rbegin();it1!=str.rend();it1++){
        cout<<*it1;
    }
    cout<<endl;

    return 0;
}
