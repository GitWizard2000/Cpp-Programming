#include <iostream>
#include <climits>

int solveBruteForce(int did, int dis)
{
    if(did == INT_MIN && dis==-1)
        return INT_MAX;
    long long int count = 0;
    long long int abs_did = llabs(did);
    long long int abs_dis = llabs(dis);

    while(abs_did >= abs_dis)
    {
        abs_did -= abs_dis;
        count++;
    }

    if((did < 0)^(dis < 0))
        count = -count;

    return static_cast<int>(count);
}

int solveBitManipulation(int did, int dis)
{
    if(did == INT_MIN && dis==-1)
        return INT_MAX;
    long long int abs_did = llabs(did);
    long long int abs_dis = llabs(dis);

    long long int quotient = 0;

    while(abs_did >= abs_dis)
    {
        long long int temp = abs_dis;
        int multiplier = 1;
        while((temp << 1) <= abs_did)
        {
            temp = (temp << 1);
            multiplier = (multiplier << 1);
        }
        abs_did -= temp;
        quotient += multiplier;
    }

    if((did < 0)^(dis < 0))
        quotient = -quotient;

    return static_cast<int>(quotient);
}

int divide(int dividend, int divisor) {
    // return solveBruteForce(dividend,divisor);
    return solveBitManipulation(dividend,divisor);
}

int main() {
    int dividend, divisor;
    std::cout << "Enter dividend and divisor: ";
    std::cin >> dividend >> divisor;

    int result = divide(dividend, divisor);
    std::cout << "Result of division: " << result << std::endl;

    return 0;
}
