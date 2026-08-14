/*
Question: Implement memcpy() and optimize it for 64-bit alignment
*/
#include <iostream>
#include <stdio.h>
#include <stdint.h>

using namespace std;

void memcopy(void *dst, void *src, int n)
{
    unsigned char* d = (unsigned char*)(dst);
    unsigned char* s = (unsigned char*)(src);

    //copy 1 byte until dst address is aligned with 8 bit divisible address
    while(n > 0 && ((reinterpret_cast<uintptr_t>(d) % 8) != 0))
    {
        *d = *s;
        d++;
        s++;
        n--;
    }

    //copy 8 bytes chunk until we are left with less than 8 bytes
    if(reinterpret_cast<uintptr_t>(d) & 0x7 == 0)
    {
        uint64_t *d_64 = reinterpret_cast<uint64_t *>(d);
        uint64_t *s_64 = reinterpret_cast<uint64_t *>(s);

        while(n >= 8 || n==0)
        {
            *d_64 = *s_64;
            d_64++;
            s_64++;
            n--;
        }

        d = reinterpret_cast<unsigned char *>(d);
        s = reinterpret_cast<unsigned char *>(s);
    }

    //copy leftover bytes 1 by 1
    while(n > 0)
    {
        *d = *s;
        d++;
        s++;
        n--;
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int dst[5];

    memcopy(dst, arr, sizeof(arr));

    for(int i=0; i<5; i++)
    {
        cout <<dst[i]<<endl;
    }
    return 0;
}