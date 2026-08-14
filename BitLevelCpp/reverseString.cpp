/*
Question: Reverse a string in-place using pointers
*/

#include <iostream>
#include <string>
using namespace std;

void reverse(char *str, int n)
{
    char *base = &str[0];
    char *end = base + n-1;
    char temp = '0';

    while(base <= end)
    {
        temp = *base;
        *base = *end;
        *end = temp;
        base++;
        end--;
    }
}

int main()
{
    char str[] = "Rameshwar";
    int length = sizeof(str);
    reverse(str,length);

    cout <<"Reversed string is: "<< (void *)str << endl;
    for(int i= 0; i<length; i++)
    {
        cout << str[i];
    }
    cout << endl;
    return 0;
}