/*
Question: Implement memcpy() functionality from scratch
*/

#include <iostream>
#include <cstdint>
#include <vector>

// Custom byte-level memcpy
void* my_memcpy(void* dest, const void* src, size_t count) {
    // Cast to byte pointers so pointer arithmetic moves 1 byte at a time
    uint8_t* d = static_cast<uint8_t*>(dest);
    const uint8_t* s = static_cast<const uint8_t*>(src);

    for (size_t i = 0; i < count; ++i) {
        d[i] = s[i]; // Copy single byte
    }

    return dest;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};

    // 1. Prepare destination vector with sufficient allocated space
    std::vector<int> vec(arr.size());

    // 2. Calculate TOTAL BYTES to copy (elements * bytes_per_element)
    size_t totalBytes = arr.size() * sizeof(int);

    // 3. Pass underlying raw data pointers using .data()
    my_memcpy(vec.data(), arr.data(), totalBytes);

    // Verify output
    for (int num : vec) {
        std::cout << num << " "; // Prints: 1 2 3 4 5
    }

    return 0;
}
