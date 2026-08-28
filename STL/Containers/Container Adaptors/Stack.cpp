#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<string> st;
    st.push("ram");
    st.push("sham");

    cout<<"Size of stack: "<<st.size()<<endl;

    //Print a stack
    cout<<"Print stack elements: "<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
