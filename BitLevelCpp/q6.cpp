/*Question: 
Count the number of trailing zeros in a number
*/

#include <iostream>
#include <cstdint>

using namespace std;

int main() {
    int input;
    cout << "Enter a number: " << endl;
    cin >> input;

    int count = 0;
    while(input)
    {
        if(input&1)
            break;
        count++;
        input = input >> 1;
    }

    cout << "count is: "<< count << endl;

    return 0;
}
