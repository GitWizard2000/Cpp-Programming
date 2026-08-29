#include<iostream>
using namespace std;

class ram{
    public:
    int a;
    void function(int a);

};

void ram::function(int a){
    cout<<"int value is: "<<a<<endl;
}

int main(){
    ram obj;
    obj.function(6);
    return 0;

}