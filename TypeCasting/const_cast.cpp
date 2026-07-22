/* const_cast example */
// Simple Point: const_cast is used to add or remove the const qualifier from a variable.
/* Points to remember:
1. const_cast can be used to change the const or volatile qualifiers of pointers or references.
Where T must be a pointer, reference, or pointer-to-member type.
2 Use const_cast only when you have to.
3 Use const_cast only when the actual refereed object/variable is not const.
4 Use when we are dealing with 3'rd party library and some API want data in non-const form but we have it in const. (actually we can not do anything in that case, but make sure that API is not changing our variable value)
*/
#include <iostream>
using namespace std;

void legacyFunction(char* data) {
    data[0] = 'H';
}
// int main() {
//     const char* text = "hello";

//     legacyFunction(const_cast<char*>(text)); // ❌ UB
// }   //Segmentation fault (core dumped)

// int main() {
//     char buffer[] = "hello";
//     const char* text = buffer;

//     legacyFunction(const_cast<char*>(text)); // ✅ Safe
// }

// int main() {
//     const int constValue = 10;

//     // Attempting to modify a const variable directly would cause a compile-time error
//     // int constValue = 20; // Uncommenting this line will result in an error

//     // Using const_cast to remove constness
//     int* modifiableValue = const_cast<int*>(&constValue);
//     *modifiableValue = 30; // Now we can modify the value

//     cout << "Modified value: " << *modifiableValue << endl;
//     cout << "Original const value (undefined behavior): " << constValue << endl;

//     return 0;
// }

void thirdPartyLibrary(int* value) {
    cout << "Value: " << *value << endl;
}
int main() {
    int number = 42;
    const int* constPtr = &number;

    thirdPartyLibrary(const_cast<int*>(constPtr)); //if we keep thirdPartyLibrary(constPtr), it will give error
    return 0;
}
