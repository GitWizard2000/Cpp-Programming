/*
Question: 
Reverse the bits in each pair of an 8-bit unsigned number.
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

    for(int i=0; i<4; i++)
    {
        uint8_t first = (n >> (i*2)) & 1;
        uint8_t second = (n >> (i*2 + 1))&1;

        result = result | (second << (i*2));
        result = result | (first << (i*2 + 1));

    }

    cout << "Output is: " << static_cast<int>(result) << endl;

    return 0;
}
