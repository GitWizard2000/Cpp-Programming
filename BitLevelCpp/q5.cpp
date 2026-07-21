/*Question: 
Reverse bits of a byte
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
    
    for(int i=0; i<8; i++)
    {
        result = (result << 1) | (n&1);
        n = n >> 1;
    }
    
    cout << "Output is: " << static_cast<int>(result) << endl;

    return 0;
}
