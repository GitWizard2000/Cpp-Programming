#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    std::unordered_map<int,string> memMap;

    memMap[1] = "ram";
    memMap.insert({2, "sham"});
    memMap.insert({0, "radha"});
    memMap.insert({4, "sita"});

    for(auto itr:memMap)
    {
        cout<<"Elements are as follows: Key: "<<itr.first <<", Value: "<< itr.second <<endl;
    }
    cout<<"***************************************************"<<endl;

    int key = 3;
    if(memMap.find(key) != memMap.end())
    {
        cout<<"Key is present in map: Key:"<<key<<", Value: "<< memMap[key] <<endl;
    }
    else
    {
        cout<<"Key is not present in map"<<endl;
    }

    //Total number of elements present in the memMap
    cout<<"Size/no. of elements of the memMap is: "<<memMap.size()<<endl;

    cout<<"***************************************************"<<endl;

    //Erase an entry from memMap
    cout<<"Erasing elements from memMap"<<endl;
    memMap.erase(2);
    for(auto itr:memMap)
    {
        cout<<"Elements are as follows: Key: "<<itr.first <<", Value: "<< itr.second <<endl;
    }
    return 0;
}