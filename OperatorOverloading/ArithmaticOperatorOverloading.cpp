// C++ program to demonstrate operator overloading for arithmetic operators
//Notes:
//1. Operator overloading allows us to define the behavior of operators for user-defined types (classes, structures).
//2. In this example, we will overload the '+' operator to add two objects of a class called Point which represents a point in 2D space.

//Following are the operators which can't be overloaded in C++:
/*
1. Scope resolution operator (::)
2. Member access operator (.)
3. Pointer to member operator (.*)
4. Ternary conditional operator (?:)
5. sizeof operator
6. Typeid operator
*/

#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    // Point() {}
    Point(int x=0, int y=0):x{x},y{y} {}

    Point operator+ (const Point &rhs)
    {
        Point P;
        P.x = x + rhs.x;
        P.y = y + rhs.y;
        return P;
    }

    Point operator- (const Point &rhs)
    {
        Point P;
        P.x = x - rhs.x;
        P.y = y - rhs.y;
        return P;
    }

    Point add(const Point &rhs)
    {
        Point P;
        P.x = x + rhs.x;
        P.y = y + rhs.y;
        return P;
    }

    void print()
    {
        cout <<"x: "<<x<<", y: "<<y<<endl;
        return;
    }
};

int main()
{
    Point P1(2,3);
    Point P2(4,5);

    Point P3 = P1 + P2;
    Point P4 = P3 - P2;
    Point P5 = P1.add(P2);

    P3.print();
    P4.print();
    P5.print();
    return 0;

}