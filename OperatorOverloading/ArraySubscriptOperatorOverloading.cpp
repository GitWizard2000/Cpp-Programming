//TOPIC: Array Subscript Operator Overloading
/*
NOTES:
1. The array subscript operator [] is used to access elements of an array.
2. In C++, you can overload the [] operator to define custom behavior for your classes.
*/

#include <iostream>
using namespace std;

class Point
{
private:
    int arr[2];

public:
    Point(int x=0, int y=0)
    {
        arr[0] = x;
        arr[1] = y;
    }

    int& operator[] (int position)
    {
        if(position==0)
            return arr[0];
        else if(position==1)
            return arr[1];
        else
            {
                cout<<"Out of bound"<<endl;
                exit(0);
            }
    }
    void print()
    {
        cout <<"x: "<<arr[0]<<", y: "<<arr[1]<<endl;
    }

};


int main()
{
    Point P1(5,4);
    P1.print();
    P1[0] = 3;
    P1[1] = 0;

    P1.print();
    P1[2] = 9;

    return 0;
}
