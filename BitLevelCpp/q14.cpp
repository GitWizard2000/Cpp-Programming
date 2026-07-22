/*
Question: Find parity of a number. If number of set bits are even then parity is 0, 
if the number is odd the parity is 1.
*/

#include <iostream>
using namespace std;

int appraoch1(int n)
{
    int result = 0;
    while(n > 0)
    {
        result = result ^ (n & 1);
        n = n >> 1;
    }
    return result;
}

int main()
{
    int n;
    int result = 0;
    cout <<"Enter the number n: ";
    cin >> n;

    result = appraoch1(n);
    cout << "Parity of the number is: "<<result << endl;

    return 0;
}
