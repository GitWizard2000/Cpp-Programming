//TOPIC: Assignment Operator Overloading in C++ with friend function

#include <iostream>
using namespace std;

class Test
{
private:
    int *data;
public:
    Test(int x=0): data(new int(x)) {}
    friend class Base; // Declare Base as a friend class to access private members of Test
};

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

    Base& operator=(const Base& other)
    {
        if (this != &other) // Check for self-assignment
        {
            *this->data = *(other.data); // Copy the value from the other object
        }
        return *this; // Return the current object to allow chained assignments
    }

    Base& operator=(const Test& other)
    {
        *this->data = *(other.data); // Copy the value from the other object
        return *this; // Return the current object to allow chained assignments
    }
};

int main()
{
    Base b1;
    b1.setData(10);
    b1.printData(); // This will show the value of b1
    Test t1(20); // Create a Test object with data value 20
    b1 = t1; // This will call the assignment operator that takes a Test object
    b1.printData(); // This will show the value of b1 after assignment from t1

    return 0;
}