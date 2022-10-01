#include<iostream>
using namespace std;

class integer{
    public:
        int x,y;
        integer(){
            x=45;
            y=10;
        }
};
int main(){
    integer a;
    cout<<"x= "<<a.x<<"\n y= "<<a.y<<"\n";
    return 0;
}
