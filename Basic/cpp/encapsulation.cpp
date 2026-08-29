#include<iostream>
using namespace std;

class ram{
    private:
    int health;
    char level;

    public:
    void setHealth(int h){
        health = h;
    }

    int getHealth(){
        return health;
    }
    ram(int h, char ch){
        health = h;
        level = ch;
    }

    ram(){};

};

int main(){

    ram r1;
    r1.setHealth(96);
    cout<<"health is: "<<r1.getHealth()<<endl;

    ram r2(56,'c');
    cout<<"r2's health is: "<<r2.getHealth()<<endl;

    return 0;

}