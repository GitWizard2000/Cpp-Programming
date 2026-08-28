#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;
    q.push("ram");
    q.push("sita");
    q.push("sham");
    q.push("radha");

    cout<<"First element of the queue: "<<q.front()<<endl;
    cout<<"Last element of the queue: "<<q.back()<<endl;

    cout <<"*****************************"<<endl;
    q.pop();
    cout<<"First element of the queue: "<<q.front()<<endl;
    cout<<"Last element of the queue: "<<q.back()<<endl;

    cout<<"Size of the queue is: "<<q.size()<<endl;
    return 0;
}