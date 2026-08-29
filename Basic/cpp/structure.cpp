#include<iostream>
using namespace std;

struct employee  {
    int eID;
    char favChar;
    float salary;
};

int main(){

    struct employee mahesh;
    mahesh.eID = 50;
    mahesh.favChar = 'r';
    mahesh.salary = 500;

    cout <<"ID is: "<<mahesh.eID<<endl;
    cout <<"fav character is: "<<mahesh.favChar<<endl;
    cout <<"salary is: "<<mahesh.salary<<endl;
    
    return 0;
}
