#include<iostream>
#include<cstring>
using namespace std;

class Hero{

    private:
    char level;
    int health;
    
    public:
    char *name;


    Hero(){
        cout<<"Constructor is Called: "<<endl;
        cout<<"sita"<<endl;
        cout<<"ram"<<endl;
        
    }

    Hero(char name_1[],int h, char ch){
        cout<<"Constructor is Called: "<<endl;
        name = new char[100];
        ///
        name = name_1;
        health = h;
        level = ch;
        // OR
        this -> name = name;
        this -> health = h;
        this -> level = ch;

    }

    void print(){
        cout<<"Name: "<<this->name<<endl;
        cout << "Health: "<< this -> health << endl;
        cout<< "Level: "<< this -> level << endl;
        cout << endl << endl;
    }

    void setHealth(int h){
        this->health = h;
    }

    void setLevel(char ch){
        this->level = ch;
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
    char name[7] = "mahesh";
    Hero h1(name,95,'A');
    //Hero h1;
    // h1.setHealth(95);
    // h1.setLevel('G');
    
    //h1.setName(name);
    h1.print();

    Hero h2(h1);
    h2.print();

    h1.name[0] = 'l';
    h1.print();

    h2.print();

    Hero h3;


    // //Copying an object to another object
    // Hero S(40,'M');  //object created statically
    // S.print();

    // Hero R(S);
    // R.print();

    // Hero L(63);
    // cout<<"Health of L is: " << L.getHealth()<<endl;




    // // below method for creating object is static allocation
    // Hero h1; // created an object h1 of type Hero
    // h1.setHealth(78);

    // // creating an object with dynamic allocation
    // Hero *h2 = new Hero;
    // (*h2).setHealth(94);

    // // h1.health = 8;
    // cout << h1.getHealth() << endl;
    // cout << (*h2).getHealth() << endl;
    return 0;
}