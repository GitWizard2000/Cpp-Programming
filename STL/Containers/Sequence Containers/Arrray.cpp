#include <iostream>
#include <array>

int main() {
    // Create an array of integers with a fixed size of 5
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    // Access and modify elements in the array
    arr[0] = 10; // Change the first element to 10

    // Print the elements of the array
    std::cout << "Array elements: ";
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Size of the array
    std::cout << "Size of the array: " << arr.size() << std::endl;

    // Check if the array is empty
    std::cout << "Is the array empty? " << (arr.empty() ? "Yes" : "No") << std::endl;

    // Access the first and last elements
    std::cout << "First element: " << arr.front() << std::endl;
    std::cout << "Last element: " << arr.back() << std::endl;

    // Access elements using at() with bounds checking
    std::cout << "Element at index 2: " << arr.at(2) << std::endl;

    // Fill the array with a specific value
    arr.fill(0);
    std::cout << "Array elements after fill: ";
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Address of the underlying array
    std::cout << "Address of the underlying array: " << arr.data() << std::endl;

    return 0;
}