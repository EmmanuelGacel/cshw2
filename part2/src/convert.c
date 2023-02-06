#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
        printf("Enter an integer :\n");
        scanf("%d", &x);
	printf("signed decimal :%d\n", x); 
	unsigned int y;
	y=x;
	printf("unsigned decimal : %u\n", y);
	printf("hexadecimal number : %X", y);
    return EXIT_SUCCESS;
}
