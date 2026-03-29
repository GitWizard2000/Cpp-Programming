// This file includes stack implementation from scratch using arrays
#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int size;
public:
    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }
    void push(int x) {
        if (top == size - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
};

int main() {
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);

    return 0;
}