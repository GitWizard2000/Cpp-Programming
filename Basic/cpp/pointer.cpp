#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"I AM Mahesh"<<endl;
    cout<<sizeof(ch)<<endl;
    cout<<endl<<endl;

    int *i = new int;
    *i = 9;
    cout<<&i<<endl;
    cout<<i<<endl;
    cout<<*i<<endl;
    cout<<endl<<endl;


    int *ptr,p;
    p = 400;
    ptr = &p;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;


    return 0;
} 