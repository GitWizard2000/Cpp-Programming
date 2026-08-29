//TOPIC: size_t in C++
/*
NOTES:
1. size_t is an unsigned integer type that is used to represent the size of objects in bytes.
2. It guarantees to be big enough to contain the size of the largest possible object that the system can handle
  - On a 32-bit system, size_t is typically a 32-bit unsigned integer (4 bytes). (typedef for unsigned int)
  - On a 64-bit system, size_t is typically a 64-bit unsigned integer (8 bytes). (typedef for unsigned long long)
3. Standard library functions that deal with sizes and memory management, are as following:
- sizeof operator
- malloc(size_t size)
- memcpy(void* dest, const void* src, size_t n)
- size_t strlen(const char* str)
4. size_t stores only non-negative values, as it is an unsigned type. It cannot represent negative sizes.
*/

#include <iostream>
#include <cstring> // for strlen
using namespace std;

int main() {
    const char* str = "Hello, World!";
    size_t len = strlen(str);
    cout << "Length of string: " << len << endl;
    return 0;
}