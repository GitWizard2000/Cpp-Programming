/*
Question: Calculate sum of 2 numbers without using +/-
*/
#include <iostream>

int getSum(int a, int b) {

    while(b != 0)
    {
        // Find carry
        int carry = a & b;

        // Shift carry to left by 1
        carry = carry << 1;

        // Find sum without carry
        int sumWithoutcarry = a ^ b;

        a = sumWithoutcarry;
        b = carry;
    }
    return a;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int sum = getSum(a, b);
    std::cout << "Sum of " << a << " and " << b << " is: " << sum << std::endl;

    return 0;
}
