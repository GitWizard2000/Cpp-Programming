#include<iostream>
using namespace std;
#include<string>

int recur(int k){
    int factorial=0;
    if (k>1){
        factorial = k*recur(k-1);
        return factorial;
    }
    else{
        return 1;
    }

}

int main(){
    int arr = 5;

    cout<<"\n Sum of first "<<arr<<" numbers is: "<<recur(arr)<<"\n \n";
    return 0;

}