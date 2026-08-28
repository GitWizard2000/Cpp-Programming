#include<iostream>
#include<algorithm>
#include<vector>
#include <string>

using namespace std;
int main () {

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(3);
    v.push_back(4);

    //Sort a vector
    sort(v.begin(),v.end());
    for(auto & i: v)
    {
        cout<<i<<endl;
    }

    cout<<"*******************"<<endl;
    //Reverse a vector
    reverse(v.begin(),v.end());
    for(auto & i: v)
    {
        cout<<i<<endl;
    }
    cout<<"*******************"<<endl;

    //Find an element in vector using binary serach 
    cout<<"Find element 3: "<<binary_search(v.begin(),v.end(),3) <<endl;

    //Max, min
    int a = 5;
    int b = 8;

    cout<<"Max of 2 numbers is: "<<max(a,b)<<endl;
    cout<<"Min of 2 numbers is: "<<min(a,b)<<endl;

    //Swap 2 numbers
    swap(a,b);
    cout<<"a is: "<<a<<" & b is : "<<b<<endl;

    //Reverse and rotate a string
    string str = "mahesh";
    reverse(str.begin(),str.end());
    cout<<"Print reversed string: "<<str<<endl;

    //Rotate a string by 2 points
    rotate(str.begin(),str.begin()+2, str.end());
    cout<<"Print string after rotation: "<<str<<endl;


    return 0;
}