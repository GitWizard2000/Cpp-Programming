#include<iostream>
using namespace std;

class class1{
    protected:
    int health;
    char level;

    public:
    void setHealth(int h){
        health = h;
    }

    int getHealth(){
        return health;
    }
    class1(int h, char ch){
        health = h;
        level = ch;
    }

    class1(){};

};

class class2: public class1{
    public:
    int marks;

    int setHealth(int h){
        cout<<"ram"<<endl;
        health = h;
        return h;
    }

};

int main(){
    class2 b1;
    b1.marks = 78;
    cout<<b1.setHealth(50)<<endl;
    cout<<b1.setHealth(45)<<endl;
    cout<<"class3's health is: "<<b1.getHealth()<<endl;



    return 0;

}