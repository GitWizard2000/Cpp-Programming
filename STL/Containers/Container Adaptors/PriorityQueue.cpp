/*
Notes:
* Priority Queue is a container adaptor that provides constant time lookup of the largest (by default) element.
* Elements are inserted in arbitrary order, but the element with the highest priority/value is always at the front.
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    //Max heap
    priority_queue<int> maxi;

    //Min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(0);
    maxi.push(4);

    cout<<"Size of the max heap is: "<<maxi.size()<<endl;
    int size_maxi = maxi.size();
    for(int i=0; i<size_maxi; i++)
    {
        cout<<maxi.top()<<endl;
        maxi.pop();
    }cout<<endl;

    mini.push(1);
    mini.push(2);
    mini.push(0);
    mini.push(4);

    cout<<"Size of the min heap is: "<<mini.size()<<endl;
    int size_mini = mini.size();
    for(int i=0; i<size_mini; i++)
    {
        cout<<mini.top()<<endl;
        mini.pop();
    }cout<<endl;

    cout<<"Is max heap empty? "<<maxi.empty()<<endl;
    cout<<"Is min heap empty? "<<mini.empty()<<endl;
    return 0;
}
