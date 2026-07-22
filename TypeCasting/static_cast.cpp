#include <iostream>
using namespace std;

int main() {
    double pi = 3.14159;

    // Static cast from double to int
    int intPi = static_cast<int>(pi);
    cout << "Value of pi as int: " << intPi << endl;

    // Static cast from int to double
    int intValue = 42;
    double doubleValue = static_cast<double>(intValue);
    cout << "Value of intValue as double: " << doubleValue << endl;

    return 0;
}