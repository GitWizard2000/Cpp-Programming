//TOPIC: Deep Copy and Shallow copy

#include<iostream>
#include <unistd.h>
using namespace std;

class Base
{
private:
    int *ptr;
    int value;
public:
    //Constructor
    Base(): ptr{new int(0)}, value{0} {
        cout << "Normal Constructor called" << endl;
    }

    //Deep copy constructor (comment out the below code to see the effect of shallow copy)
    Base(const Base &rhs)    {
        cout << "Deep Copy Constructor called" << endl;
        ptr = new int(*(rhs.ptr)); // Deep Copy
        value = rhs.value;
    }

    void setPtr( int ptr)
    {
        *(this->ptr) = ptr;
    }

    void setValue(int value)
    {
        this->value = value;
    }

    int getValue()
    {
        return value;
    }

    int getPtr()
    {
        return *ptr;
    }
};

int main()
{
    Base b1;
    b1.setValue(10);
    b1.setPtr(20);
    sleep(3); // Sleep for a while to see the order of constructor calls
    Base b2 = b1;
    cout << "b1 value: " << b1.getValue() << ", b1 ptr: " << b1.getPtr() << endl;
    cout << "b2 value: " << b2.getValue() << ", b2 ptr: " << b2.getPtr() << endl;

    b2.setValue(30);
    b2.setPtr(40);

    cout << "After modifying b2:" << endl;
    cout << "b1 value: " << b1.getValue() << ", b1 ptr: " << b1.getPtr() << endl;
    cout << "b2 value: " << b2.getValue() << ", b2 ptr: " << b2.getPtr() << endl;

}