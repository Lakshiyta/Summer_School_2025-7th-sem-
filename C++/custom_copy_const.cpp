#include <iostream>
using namespace std;

class Data {
public:
    string name;
    int age;

    // Parameterized constructor
    Data(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Custom copy constructor
    Data(const Data& other) {
        cout << "Custom Copy Constructor Called" << endl;
        this->name = other.name;
        this->age = other.age;
    }

    void printDetails(void) {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Data M1("Mitali", 20);
    M1.printDetails();

    Data M2(M1);              // Custom copy constructor will be called
    M2.printDetails();

    return 0;
}
