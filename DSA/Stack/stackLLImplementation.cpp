//Implement stack from scratch --> Linked List appraoch
#include <iostream>
using namespace std;

class stack
{
public:
    class Node
    {
    public:
        int value;
        Node* next;

        Node(){}
        Node(int v)
        {
            value = v;
            next = nullptr;
        }
    };

    int MAX_SIZE;
    int topIndex;
    Node* head;

    stack(int size)
    {
        head = nullptr;
        MAX_SIZE = size;
        topIndex = 0;
    }

    void push(int value)
    {
        if(isFull())
        {
            cout << "Stack is Full!" << endl;
        }
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        topIndex++;
    }

    void pop()
    {
        if(isEmpty())
        {
            cout << "Stack is empty!" << endl;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        topIndex--;
    }

    int peek()
    {
        if(isEmpty())
        {
            cout << "Stack is empty!" << endl;
        }
        return head->value;
    }

    bool isFull()
    {
        return (topIndex==MAX_SIZE);
    }

    bool isEmpty()
    {
        return (topIndex==0);
    }

};

int main()
{
    return 0;
}