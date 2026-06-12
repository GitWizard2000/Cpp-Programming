//Implement stack from scratch --> Array appraoch
#include<iostream>
using namespace std;

class stack
{
public:
    int MAX_SIZE;
    int *arr;
    int topIndex;

    stack(int size)
    {
        MAX_SIZE = size;
        arr = new int[MAX_SIZE];
        topIndex = -1;
    }

    void push(int value)
    {
        if(isFull())
        {
            cout<<"Stack is full!"<<endl;
        }
        topIndex++;
        arr[topIndex] = value;
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty!"<<endl;
        }
        topIndex--;
    }

    int peek()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty!"<<endl;
        }
        return arr[topIndex];
    }

    bool isFull()
    {
        return (topIndex == MAX_SIZE-1);
    }

    bool isEmpty()
    {
        return (topIndex==-1);
    }
};


int main()
{
    stack st(10);
    return 0;
}

// // This file includes stack implementation from scratch using arrays
// #include <iostream>
// using namespace std;

// class Stack {
// private:
//     int* arr;
//     int top;
//     int size;
// public:
//     Stack(int s) {
//         size = s;
//         arr = new int[size];
//         top = -1;
//     }
//     void push(int x) {
//         if (top == size - 1) {
//             cout << "Stack Overflow" << endl;
//             return;
//         }
//         arr[++top] = x;
//     }

//     void pop() {
//         if (top == -1) {
//             cout << "Stack Underflow" << endl;
//             return;
//         }
//         top--;
//     }
// };

// int main() {
//     Stack s(5);
//     s.push(10);
//     s.push(20);
//     s.push(30);

//     return 0;
// }