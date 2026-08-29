#include<iostream>
using namespace std;

class class1{
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
    class1(int h, char ch){
        health = h;
        level = ch;
    }

    class1(){};

};

class class2: public class1{
    public:
    int age;

};

class class3: public class2{
    public:
    int marks;
};

int main(){

    class2 b1;
    b1.setHealth(96);
    cout<<"class2's health is: "<<b1.getHealth()<<endl;

    class3 c1;
    c1.setHealth(45);
    cout<<"class3's health is: "<<c1.getHealth()<<endl;



    return 0;

}