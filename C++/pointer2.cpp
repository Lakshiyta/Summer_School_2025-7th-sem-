//Pointer to Constant

#include<iostream>
using namespace std;

int main(){
    const float hello = 3.14;
    const float *helloPtr;
    helloPtr = &hello;

    // *helloPtr = 4.12; // ❌ Not allowed

    float bolo = 22.97;
    helloPtr = &bolo;  // ✅ okay, as pointer is just pointing, not modifying
    // *helloPtr = 11.9; // ❌ Not allowed (even if bolo isn't const)

    cout << "Value pointed by helloPtr: " << *helloPtr << endl;

    return 0;
}


/*If you want to modify the value, use a normal pointer:
#include<iostream>
using namespace std;

int main(){
    float hello = 3.14;
    float *helloPtr;
    helloPtr = &hello;

    *helloPtr = 4.12;  // ✅ Now allowed

    float bolo = 22.97;
    helloPtr = &bolo;
    *helloPtr = 11.9;  // ✅ allowed

    cout << "bolo = " << bolo << endl;

    return 0;
}
*/