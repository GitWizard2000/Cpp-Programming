#include <iostream>
#include <stack>
using namespace std;

int main() {
    cout << "Stack implementation will go here." << endl;
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;

    s.empty() ? cout << "Stack is empty" << endl : cout << "Stack is not empty" << endl;

    cout << "Stack size: " << s.size() << endl;
    return 0;
}