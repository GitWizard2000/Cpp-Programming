/*
Vector Notes:
1. Vectors are dynamic arrays that can grow and shrink in size.
2. They provide random access to elements using the subscript operator [] or the at() method.
3. Vectors manage their own memory and automatically resize when elements are added or removed.
4. The capacity of a vector is the amount of space allocated for its elements, while the size is the number of elements currently stored in the vector.
5. Vectors double their capacity when they run out of space, which can lead to performance overhead if not managed properly.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Create a vector of integers
    std::vector<int> v;
    std::cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(10);
    std::cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(10);
    std::cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(10);
    std::cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(10);
    std::cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(10);
    std::cout<<"Capacity of v: "<<v.capacity()<<endl;

    //Copy a vector into another vector
    std::vector<int> v2(v);

    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Access and modify elements in the vector
    vec[0] = 10; // Change the first element to 10

    // Print the elements of the vector
    std::cout << "Vector elements: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Size of the vector
    std::cout << "Size of the vector: " << vec.size() << std::endl;
    // Check if the vector is empty
    std::cout << "Is the vector empty? " << (vec.empty() ? "Yes" : "No") << std::endl;

    // Access the first and last elements
    std::cout << "First element: " << vec.front() << std::endl;
    std::cout << "Last element: " << vec.back() << std::endl;

    // Access elements using at() with bounds checking
    std::cout << "Element at index 2: " << vec.at(2) << std::endl;

    // Add elements to the vector
    vec.push_back(6);
    std::cout << "Vector elements after push_back: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Remove the last element from the vector
    vec.pop_back();
    std::cout << "Vector elements after pop_back: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Address of the underlying vector
    std::cout << "Address of the underlying vector: " << vec.data() << std::endl;

    // Sorting the vector
    std::sort(vec.begin(), vec.end());
    std::cout << "Vector elements after sorting: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Clear the vector
    vec.clear();
    std::cout << "Vector elements after clear: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}