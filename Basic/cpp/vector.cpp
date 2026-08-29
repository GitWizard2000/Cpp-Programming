// #include<iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> nums;
//     //nums = {0,1,2,3,4};
//     // nums.push_back(1);
//     // nums.push_back(2);
//     // nums.push_back(3);

//     // for(int element : nums){
//     //     cout<<element<<endl;
//     // }

//     cout <<"\n Size of the vector is: "<< nums.size()<<endl;
//     return 0;

// }

#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    vector<string> names{ "apple", "banana", "cherry" };
    
    for (string name: names) {
        cout << name << endl;
    }
}