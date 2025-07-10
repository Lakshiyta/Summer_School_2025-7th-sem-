//CONSTRUCTOR OVERLOADING

#include<iostream>
using namespace std;

class Data{
    public:
    int age;
    string name;
    Data(){
        cout<<"Hello, bolo"<<endl;
    }
    Data(int a, string n = "Poor People"){
        age =  a;
        name = n;
    }
    void Print(void);
};

void Data::Print(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age;
}

int main(){
    Data acc;                //Default Constructor || Non Para constructor
    acc.Print();
    Data ac(20);
    ac.Print();
    return 0;
}