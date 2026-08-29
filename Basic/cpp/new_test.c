#include<stdio.h>
// int main(void)
// {
// 	printf("Hello World\n");
// 	const char c = getchar();
// 	printf(c);
// 	printf("Hello World\n");

// 	return 0;
// }

int main() {

    int c;

    c=getchar();
    while (c != 'k') {
        putchar(c);
        c = getchar();
    }

	return 0;

}