#include<iostream>
using namespace std;

int call(int &m){
    m = m + 1;
    return m;
};

int main(){
    int i=12;
    cout << call(i)<< endl;
    cout<<"Original i is: "<<i<<endl;
    return 0;
}