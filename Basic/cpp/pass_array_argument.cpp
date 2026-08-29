#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int* fun(int *i){
    cout<<i<<endl;
    return i;
}

int main(){
    int arr[7] = {1,2,3,4,5};
    //int mar[40];
    int *m = fun(arr);
    cout<<"ram"<<endl;
    //cout<<fun(arr)<<'    '<<arr[2]<<endl; 
    return 0;
    
}