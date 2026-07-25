/*
Question: Multiplication using bit shifts
*/
#include <iostream>
#include <cstdint>

void multiplication(int a, int b)
{
    int count = 0;
    int result = 0;

    while(b > 0)
    {
        if(b & 1)
        {
            result = result + (a << count);
        }
        b = (b >> 1);
        count ++;
    }
    
    std::cout <<"Product of a & b is: "<<result <<std::endl;
}

int main() {
    std::cout << "Start small. Ship something." << std::endl;
    int a = 13;
    int b = 9;

    multiplication(a, b);
    return 0;
}
