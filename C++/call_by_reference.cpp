//Call by reference: reference is a derived datatype.

#include<iostream>
using namespace std;

/* int main()
{
    int a=5;
    cout<<"a: "<<a<<endl;

    // int &r;               --Error
    int &r = a;

    r=7;
    cout<<" r: "<<a<<endl;
    cout<<"a: "<<a;
    return 0;
} */

int change(int &r){
    r=7;
    return r;
}
int main()
{
    int a=5;
    cout<<"a: "<<a<<endl;
    change(a);
    cout<<"a: "<<a;
    return 0;
}