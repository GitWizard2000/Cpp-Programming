/*
Question: 
Reverse nibbles in a 32-bit integer.
E.g: Input: 0xABCD1234, Output: 0x4321DCBA.
*/

#include <iostream>
#include <cstdint> // Provides fixed-width unsigned types like uint32_t

using namespace std;

int main()
{
    uint32_t n;
    uint32_t result = 0;
    cout << "Enter a 32-bit unsigned number: " << endl;
    cin >> n;

    for(int i=0; i<8; i++)
    {
        int temp = (n >> (i*4)) & 0xFu;
        result = result | (temp << ((7-i)*4));
    }

    cout << "Output is: " << result << endl;
    return 0;
}
