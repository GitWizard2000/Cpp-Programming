//TOPIC: Type Cast Operator Overloading in C++

/*
NOTES:
1. Type cast operator overloading allows us to define how an object of a user-defined class can be converted to another type.
2. The syntax for overloading a type cast operator is:
    operator type() {
        // conversion logic
    }
3. Overloading type cast operators can be useful for implicit conversions, but it should be done with caution to avoid unintended conversions.
*/

#include <iostream>
using namespace std;

class Ruppes {
private:
    double amount;
public:
    Ruppes(double r = 0) : amount(r) {}
    void print() {
        cout << "Amount in Ruppes: " << amount << endl;
    }
};

class Dollars {
private:
    double amount;
public:
    Dollars(double d = 0) : amount(d) {}
    void print() {
        cout << "Amount in Dollars: " << amount << endl;
    }
    // Overloading type cast operator to convert Dollars to Ruppes
    // Neither the return type nor the operator keyword is specified in the function declaration for type cast operator overloading.
    operator Ruppes() {
        return Ruppes(amount * 74); // Assuming 1 Dollar = 74 Ruppes
    }
};

int main() {
    Ruppes r;
    Dollars d(10); // 10 dollars
    
    r = d; // Implicit conversion from Dollars to Ruppes (requires type cast operator overloading)
    d.print();
    r.print();

    return 0;
}