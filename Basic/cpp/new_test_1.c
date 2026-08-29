// #include<stdio.h>
// #include<stdlib.h>

// int main() {

//     char c[20];
//     printf("Enter String: ");
//     scanf("%s",c);
//     printf("name is %s",c);
// 	return 0;

// }

#include <stdio.h>

int main()
{
    int c;
    while ((c == getchar() != EOF))
    {
        printf("%d\n", c);
    }
    printf("%d - at EOF\n", c);
}