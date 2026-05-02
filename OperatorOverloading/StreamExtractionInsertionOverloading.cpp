/*
- Purpose:
    - Provide custom input/output behavior for the Person class using standard streams.
    - Allow writing `cout << person` to display a Person and `cin >> person` to read one.
    - Maintain the idiomatic stream operator syntax and support chaining.

- Why these functions are defined outside the class:
    - The left-hand operand of `operator<<` is `ostream` and of `operator>>` is `istream`.
    - To support expressions like `cout << person` and `cin >> person`, the operators must be non-member functions.
    - Defining them outside the class matches the standard stream operator overload pattern.

- Why `friend` is needed:
    - The operator functions need access to private data members `name` and `age`.
    - Declaring them as friends grants that access while keeping the members encapsulated.
    - It avoids exposing internal state through public accessors just for streaming.

- Additional notes:
    - Returning the stream object enables chaining expressions like `cout << p1 << p2`.
    - The operator overloads encapsulate the formatting and parsing logic for Person objects.
*/
//TOPIC: Stream Extraction and Insertion Operator Overloading

/*
NOTES:
1. << ==> Stream Insertion Operator
2. >> ==> Stream Extraction Operator
3. cout is an object of ostream class and cin is an object of istream class.
4. When is overloading of << and >> operators required?
   - When we want to input or output objects of user-defined classes using cin and cout, we need to overload these operators.
*/

#include <iostream>
#include <string>
using namespace std;

// User-defined class
class Person {
private:
    string name;
    int age;
public:
    // Constructor
    // Person() : name(""), age(0) {}
    Person(string n="", int a=0) : name(n), age(a) {}

    // Friend functions to overload the stream operators
    friend ostream& operator<<(ostream& os, const Person& p);
    friend istream& operator>>(istream& is, Person& p);
};


// Overloading the stream insertion operator (<<)
ostream& operator<<(ostream& os, const Person& p) {
    os << "Name: " << p.name << ", Age: " << p.age;
    return os; // Return the stream object to allow chaining
}

// Overloading the stream extraction operator (>>)
istream& operator>>(istream& is, Person& p) {
    cout << "Enter name: ";
    is >> p.name; // Read the name
    cout << "Enter age: ";
    is >> p.age; // Read the age
    return is; // Return the stream object to allow chaining
}

int main() {
    Person person1("Alice", 30);
    cout << person1 << endl; // Using overloaded << operator

    Person person2;
    cin >> person2; // Using overloaded >> operator
    cout << person2 << endl; // Display the entered details

    return 0;
}
