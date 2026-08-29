#include<iostream>
#include<cstring>
using namespace std;

class Hero{

    private:
    char level;
    int health;
    
    public:
    char *name;

    Hero(char* name, int h, char ch){

        cout<<"Constructor is Called: "<<endl;
        name = name;
        health = h;
        level = ch;
        // OR
        this -> name = name;
        this -> health = h;
        this -> level = ch;

    }

    Hero(){
        cout<<"Constructor is Called: "<<endl;
        name = new char[100];
    }

    void print(){
        cout<<"Name: "<<this->name<<endl;
        cout << "Health: "<< this -> health << endl;
        cout<< "Level: "<< this -> level << endl;
        cout << endl << endl;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    char* getName(){
        return name;
    }
};


int main(){

    Hero h1("mahesh",95,'A');
    h1.print();

    Hero h2("ramesh",85,'B');
    h2.print();

    h1 = h2;

    h1.print();

    h2.print();

    return 0;
}