//Topic: Unary operator overloading in cpp

/*
NOTES:
1. Unary operators are: +, -, ! (+a, -a, !a) Only one operand is present
2. a + b ==> This is binary operator as it has 2 operand
2. In C++, you can overload unary operators to define custom behavior for your classes.
*/

#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int x=0, int y=0): x{x},y{y} {}

    Point operator-()
    {
        Point P;
        P.x = -x;
        P.y = -y;
        return P;
    }

    void print()
    {
        cout <<"x: "<<x<<" y: "<<y<<endl;
    }
};


int main()
{
    Point P1(2,8);
    Point P2;

    P1.print();
    P2.print();

    Point P3 = -P1;
    P3.print();

    return 0;
}