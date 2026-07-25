/*
Question: Find two unique numbers in an array where every other number appears twice
*/

#include <iostream>
#include <cstdint>
#include <vector>

using namespace std;

void twoUniqueNumbers(vector<int> &arr)
{
    vector<int> result;
    int sum = 0;
    for(int i=0; i<arr.size(); i++)
    {
        sum = sum ^ arr[i];
    }

    //Trick to find the left most set bit in the sum
    // n & -n gives the left most set bit in n (all other bits are 0, it's a bitmask basically with only the left most set bit)
    uint32_t leftMostSetBit = static_cast<uint32_t>(sum) & (-(static_cast<uint32_t>(sum)));
    
    int num1 = 0;
    int num2 = 0;

    for( auto num : arr)
    {
        if(num & leftMostSetBit)
            num1 = num1 ^ num;
        else
            num2 = num2 ^ num;
    }
    result.push_back(num1);
    result.push_back(num2);
    
    for(auto num : result)
        cout <<"num is: "<<num<<endl;
}

int main() {
    // Write C++ code here
    std::cout << "Start small. Ship something." << std::endl;
    vector<int> arr = {1,1,2,3,3,4};

    twoUniqueNumbers(arr);
    return 0;
}