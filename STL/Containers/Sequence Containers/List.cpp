#include <iostream>
#include <list>

int main() {
    // Create a list of integers
    std::list<int> lst = {1, 2, 3, 4, 5};

    // Access and modify elements in the list
    lst.front() = 10; // Change the first element to 10

    // Print the elements of the list
    std::cout << "List elements: ";
    for (const auto& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Size of the list
    std::cout << "Size of the list: " << lst.size() << std::endl;
    // Check if the list is empty
    std::cout << "Is the list empty? " << (lst.empty() ? "Yes" : "No") << std::endl;

    // Access the first and last elements
    std::cout << "First element: " << lst.front() << std::endl;
    std::cout << "Last element: " << lst.back() << std::endl;

    // Add elements to the list
    lst.push_back(6);
    std::cout << "List elements after push_back: ";
    for (const auto& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Remove the last element from the list
    lst.pop_back();
    std::cout << "List elements after pop_back: ";
    for (const auto& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Sort the list (note: std::list has its own sort method)
    lst.sort();
    std::cout << "List elements after sorting: ";
    for (const auto& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    lst.push_front(21);
    lst.push_back(25);
    std::cout << "List now looks like following: ";
    for (const auto& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    //Erase [o(n) time complexity]
    //Delete by iterator:
    auto itr = std::next(lst.begin(),2);
    lst.erase(itr);
    std::cout << "After erasing element at index 2: ";
    for (const auto& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    //Size of list
    std::cout << "Size of the list after erasing: " << lst.size() << std::endl;

    //Copy a list into another list
    std::list<int> lst_copy(lst);

    // Clear the list
    lst.clear();
    std::cout << "List elements after clear: ";
    for (const auto& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;


    return 0;
}