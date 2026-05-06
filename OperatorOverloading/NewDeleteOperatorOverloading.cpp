//TOPIC: New and Delete Operator Overloading in C++
/*
NOTES:
1. The new and delete operators can be overloaded to provide custom memory management for user-defined classes.
2. 2 types of overoading are possible:
   - Class-specific overloading: Overloading new and delete operators for a specific class to manage memory for objects of that class.
   - Global overloading: Overloading new and delete operators globally to manage memory for all objects in the program.
3. The syntax for overloading new and delete operators is:
    void* operator new(size_t size) {
        // custom allocation logic
    }
    void operator delete(void* ptr) {
        // custom deallocation logic
    }
4. Overloading new and delete can be useful for optimizing memory usage, implementing custom memory pools, or adding debugging features to track memory allocations and deallocations.
5. Both new and deelete operators must be defined as static member functions or as global functions, and they should handle memory management for the class objects appropriately.
6. They dont have access to "this" pointer as they are static functions. (static keywork is not needed, they are by default static functions)
*/

#include <iostream>
using namespace std;


// Local Overloading
class MyClass {
private:
    int data;
public:
    MyClass(int d = 0) : data(d) {
        cout << "Constructor called for data: " << data << endl;
    }
    ~MyClass() {
        cout << "Destructor called for data: " << data << endl;
    }
    // Overloading new operator
    void* operator new(size_t size) {
        cout << "Custom new operator called. Size: " << size << " bytes" << endl;
        void* ptr = malloc(size); // Allocate memory using malloc
        if (!ptr) {
            throw bad_alloc(); // Throw an exception if memory allocation fails
        }
        return ptr; // Return the allocated memory
    }
    // Overloading delete operator
    void operator delete(void* ptr) {
        cout << "Custom delete operator called." << endl;
        free(ptr); // Deallocate memory using free
    }
};


// Global Overloading - int
void* operator new(size_t size) {
    cout << "Global custom new operator called. Size: " << size << " bytes" << endl;
    void* ptr = malloc(size);
    if (!ptr) {
        throw bad_alloc();
    }
    return ptr;
}

void operator delete(void* ptr) {
    cout << "Global custom delete operator called." << endl;
    free(ptr);
}


// Global overloading of array
void* operator new[](size_t size) {
    cout << "Global custom new[] operator called. Size: " << size << " bytes" << endl;
    void* ptr = malloc(size);
    if (!ptr) {
        throw bad_alloc();
    }
    return ptr;
}

void operator delete[](void* ptr) {
    cout << "Global custom delete[] operator called." << endl;
    free(ptr);
}

// Gloval overloading with values
// Global Overloading - int
void* operator new(size_t size, int value) {
    cout << "With value - global custom new operator called. Size: " << size << " bytes" << endl;
    void* ptr = malloc(size);
    if (!ptr) {
        throw bad_alloc();
    }
    else{
        // Initialize the allocated memory with the provided value (for demonstration)
        *static_cast<int*>(ptr) = value; // Assuming the allocated memory is for an int
    }
    return ptr;
}

int main() {
    //Local OVerloading
    MyClass* obj1 = new MyClass(); // Using overloaded new operator
    delete obj1; // Using overloaded delete operator

    // Global Overloading - int
    int* num = new int(42); // Using overloaded new operator
    delete num; // Using overloaded delete operator

    // Global Overloading - array
    int* arr = new int[5]; // Using overloaded new[] operator
    delete[] arr; // Using overloaded delete[] operator

    int *numWithValue = new int(100); // Using overloaded new operator with value
    cout << "Value stored in numWithValue: " << *numWithValue << endl;
    delete numWithValue; // Using overloaded delete operator

    return 0;
}
