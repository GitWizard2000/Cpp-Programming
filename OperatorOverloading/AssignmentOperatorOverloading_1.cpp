//TOPIC: Assignment Operator Overloading in C++

#include <iostream>
using namespace std;

class Base
{
private:
    int *data;
public:
    Base(): data(new int(0)) {}

    void setData(int value)
    {
        *data = value;
    }

    void printData()
    {
        cout << "Data: " << *data << endl;
    }

    Base operator=(const Base& other)
    {
        if (this != &other) // Check for self-assignment
        {
            *this->data = *(other.data); // Copy the value from the other object
        }
        return *this; // Return the current object to allow chained assignments
    }
};

int main()
{
    Base b1;
    b1.setData(10);
    b1.printData();

    Base b2, b3;
    b2 = b3 = b1; // This will call the assignment operator, which performs a deep copy
    b2.printData();
    b2.setData(20); // Modifying b2 will also modify b1 due to shallow copy
    b1.printData(); // This will show the modified value, which is not desired
    b3.printData(); // This will also show the modified value, which is not desired

    return 0;
}