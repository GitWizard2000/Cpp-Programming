/*
Question: Implement ffs() [Find first set bit] from scratch
*/

#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    int n;
    int count = 0;

    cout<<"Enter number n: ";
    cin >> n;

    if (n == 0) return 0;

    for(int i=0; i<32; i++)
    {
        if((n >> i)&1)
        {
            count++;
            break;
        }
        count++;
    }

    cout <<"First set bit is at position: "<<count << endl;
    return 0;
}