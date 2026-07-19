/* 
Question: 
Write a C++ program to reverse the bytes of a 32-bit unsigned number using bitwise operations.
*/

#include <iostream>
#include <cstdint> // Provides fixed-width unsigned types like uint32_t
using namespace std;

int main() {
    uint32_t n;
    cout << "Enter a 32-bit unsigned number: " << endl;
    cin >> n;

    uint32_t result = 0;

    // Shift each byte directly from its original position to its new position
    result |= (n & 0x000000FF) << 24; // Byte 0 -> Byte 3
    result |= (n & 0x0000FF00) << 8;  // Byte 1 -> Byte 2
    result |= (n & 0x00FF0000) >> 8;  // Byte 2 -> Byte 1
    result |= (n & 0xFF000000) >> 24; // Byte 3 -> Byte 0
    
    cout << "Output is: " << result << endl;

    return 0;
}
