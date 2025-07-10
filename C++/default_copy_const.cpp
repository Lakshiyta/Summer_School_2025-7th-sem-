#include <iostream>
using namespace std;

class Data{
    public:
        string name;
        int age;

        Data(string name, int age){
            this -> name = name;
            this -> age =  age;
        }
        void printDetails(void){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};

int main(){
    Data M1("Mitali", 20);
    M1.printDetails();

    Data M2(M1);              // DEFAULT COPY CONSTRUCTOR
    M2.printDetails();
    return 0;
    
}