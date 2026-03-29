#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string str = "Dholesh";
    string result = "";
    stack<char> charStack;

    // Push all characters of the string onto the stack
    for(int i=0; i<str.length(); i++)
    {
        charStack.push(str[i]);
    }

    while(!charStack.empty())
    {
        char ch = charStack.top();
        charStack.pop();
        result.push_back(ch);
    }

    cout<<"Reversed string is: "<<result<<endl;

    return 0;
}
