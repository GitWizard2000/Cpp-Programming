/*
Question: Implement memset() functionality from scratch 
*/

#include <iostream>
#include <vector>
#include <cstdint>

// 1. Standard memset returns the original destination pointer (void*)
void* memoryset(void* dst, uint8_t num, size_t size)
{
    uint8_t* dst_addr = static_cast<uint8_t*>(dst);
    
    // 2. Use size_t for loop counter to prevent signed/unsigned comparison warnings
    for (size_t i = 0; i < size; ++i)
    {
        dst_addr[i] = num;
    }

    return dst;
}

int main() {
    std::cout << "Testing custom memset functionality:\n";
    
    std::vector<int> arr = {1, 2, 3, 4, 5};
    size_t totalBytes = arr.size() * sizeof(int);
    
    std::vector<int> vec(arr.size()); // Pre-allocated vector memory

    // Fill the memory with 0s
    memoryset(vec.data(), 0, totalBytes);

    for (size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " "; // Output: 0 0 0 0 0
    }
    std::cout << "\n";

    return 0;
}