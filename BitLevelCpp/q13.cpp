/*
Question: Implement popcount() from scratch [Count total number of set bits]
*/

#include <iostream>
using namespace std;

int appraoch1(int n)
{
    int count = 0;
    while(n > 0)
    {
        if(n&1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int approach2(int n)
{
    int count = 0;
    while(n > 0)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    int result = 0;
    cout <<"Enter the number n: ";
    cin >> n;

    result = appraoch1(n);
    cout << "Result from appraoch 1 is: "<<result << endl;
    result = approach2(n);
    cout << "Result from appraoch 2 is: "<<result << endl;
    return 0;
}
