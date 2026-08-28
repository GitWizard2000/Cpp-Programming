/*
Deque Notes:
1. Deques (double-ended queues) allow fast insertion and deletion at both the beginning and the end.
2. They provide random access to elements using the subscript operator [] or the at() method.
3. Deques are not guaranteed to have contiguous memory allocation like vectors.
4. The size of a deque is the number of elements currently stored in it.
*/

#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(10);
    d.push_front(20);

    for(auto &e: d)
    {
        cout<<e<<endl;
    }
    cout<<"***********************"<<endl;

    d.push_back(30);
    d.push_back(40);
    d.push_back(50);

    d.pop_back();
    d.pop_front();
    for(auto &e: d)
    {
        cout<<e<<endl;
    }

    cout<<"***********************"<<endl;
    cout<<"Front element: "<<d.front()<<endl;
    cout<<"Last element: "<<d.back()<<endl;

    cout<<"***********************"<<endl;

    sort(d.begin(),d.end());
    cout<<"Sorted deque: "<<endl;
    for(auto &e: d)
    {
        cout<<e<<endl;
    }
    cout<<"***********************"<<endl;

    cout<<"Element at index 1: "<<d.at(1)<<endl;

    cout<<"***********************"<<endl;
    cout<<"deque empty or not? "<<d.empty()<<endl;
    cout<<"Size of deque: "<<d.size()<<endl;

    cout<<"***********************"<<endl;
    cout<<"Erase element at index 1: "<<endl;
    d.erase(d.begin()+1);
    for(auto &e: d)
    {
        cout<<e<<endl;
    }
    cout<<"Erase elements in a range: "<<endl;
    d.push_back(60);
    d.push_back(70);
    d.push_back(80);
    d.push_back(90);
    d.erase(d.begin()+1,d.begin()+3);
    for(auto &e: d)
    {
        cout<<e<<endl;
    }

    return 0;
}
