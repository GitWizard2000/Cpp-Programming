#include<iostream>
#include<string>
#include<cstring>

using namespace std;

char* fun(char i[]){
    *(i+1) = 'r';
    cout<<i<<endl;
    return i;
}

int main(){
    char arr[7] = "mahesh";
    char *mar = fun(arr);
    strcpy(arr,fun(arr));
    cout<<fun(arr)<<endl; 
    return 0;
    
}