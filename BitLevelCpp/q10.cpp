/*
Question: Implement memmove() functionality from scratch
*/

#include <cstdint>
#include <cstddef>

void* my_memmove(void* dst, const void* src, size_t count) {
    uint8_t* d = static_cast<uint8_t*>(dst);
    const uint8_t* s = static_cast<const uint8_t*>(src);

    // No work needed if pointers are identical or count is 0
    if (d == s || count == 0) {
        return dst;
    }

    if (d > s && d < s + count) {
        // OVERLAP CASE: Destination starts inside the source block.
        // Copy BACKWARD (right-to-left)
        for (size_t i = count; i > 0; --i) {
            d[i - 1] = s[i - 1];
        }
    } else {
        // SAFE CASE: No overlap or dst < src.
        // Copy FORWARD (left-to-right)
        for (size_t i = 0; i < count; ++i) {
            d[i] = s[i];
        }
    }

    return dst;
}
