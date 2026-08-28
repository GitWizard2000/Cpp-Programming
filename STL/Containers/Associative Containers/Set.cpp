/*
Notes:
* Set is an associative container that contains a sorted set of unique objects of type Key.
* The value of the elements cannot be modified once they are added to the set.
* Internally, the elements are always sorted.
* Common operations include insertion, deletion, and search, all of which have logarithmic complexity.
* Note that sets do not allow duplicate elements.
* Sets are typically implemented as balanced binary search trees (e.g., red-black trees).
*/

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    //Insert element
    s.insert(1);
    s.insert(2);
    s.insert(20);
    s.insert(2);
    s.insert(-1);
    s.insert(0);
    s.insert(0);
    s.insert(1);
    s.insert(5);
    s.insert(6);

    for(auto &i:s)
    {
        cout<<i<<endl;
    }
    cout << endl;

    //Erase elemenet
    auto itr = s.begin();
    (++itr)++;
    s.erase(itr);
    for(auto &i:s)
    {
        cout<<i<<endl;
    }
    cout << endl;

    //Check if element is present in the set
    cout<<"Check if element is present in the set: "<<s.count(5)<<endl;
    return 0;
}
