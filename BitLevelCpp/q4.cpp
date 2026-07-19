/*
Question: 
Swap two nibbles of a byte
*/
#include <iostream>
#include <cstdint>

using namespace std;

int main() {
    int input;
    cout << "Enter a 8-bit unsigned number: " << endl;
    cin >> input;

    uint8_t result = 0;
    uint8_t n = static_cast<uint8_t>(input);
    
    result = result | ((n & 0xF) << 4);
    result = result | ((n & 0xF0) >> 4);
    
    cout << "Output is: " << static_cast<int>(result) << endl;

    return 0;
}
