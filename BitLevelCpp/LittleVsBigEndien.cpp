#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    char * ptr = reinterpret_cast<char *>(&a);
    cout <<"Seq of values: "<<endl;

    cout << hex << showbase;
    for(int i=0; i<4; i++)
    {
        cout <<  static_cast<unsigned int>(static_cast<unsigned char>(ptr[i])) << endl;
        // ptr++;
    }

    return 0;
}