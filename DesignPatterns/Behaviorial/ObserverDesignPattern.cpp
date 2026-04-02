#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Subsriber
{
public:
    virtual void notify(const string& Str) = 0;

};

class Channel
{
    vector<Subsriber*> subscribers;

public:
    void subscribe(Subsriber* sub)
    {
        subscribers.push_back(sub);
    }

void uploadVideo(const string& title)
    {
        cout <<"Video uploaded to channel cppNuts: "<<title<<endl;
        for(auto* sub:subscribers)
        {
            sub->notify(title);
        }
    }

};

class User: public Subsriber
{
    string username;
public:
    User (const string& name): username(name)
    {}
    void notify (const string& title)
    {
        cout << "Hey " <<username<< " New Video is uploaded: "<<title<< endl;
    }
};


int main()
{
    Channel cppNuts;

    User user1("Ram");
    User user2("Sham");
    User user3("Krishna");

    cppNuts.subscribe(&user1);
    cppNuts.subscribe(&user2);
    cppNuts.subscribe(&user3);

    cppNuts.uploadVideo("Object oriented programming series");

    return 0;

}
