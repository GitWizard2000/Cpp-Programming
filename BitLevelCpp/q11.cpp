/*
Question: Implement count leading zeros (CLZ) functionality from scratch
*/

#include <iostream>
#include <cstdint>

// Custom bitwise count leading zeros function
size_t count_leading_zeros_32(uint32_t val) {
    if (val == 0) return 32; // Special case: 0 has all 32 bits set to zero

    size_t count = 0;
    // Check bits starting from MSB (bit 31) down to bit 0
    for (int i = 31; i >= 0; --i) {
        if ((val >> i) & 1U) {
            break; // Stop at the first '1' bit
        }
        count++;
    }
    return count;
}

int main() {
    uint32_t val = 8;
    std::cout << "Custom Loop CLZ: " << count_leading_zeros_32(val) << "\n"; // Outputs: 28
    std::cout << "Zero test CLZ: " << count_leading_zeros_32(0) << "\n";      // Outputs: 32
    return 0;
}