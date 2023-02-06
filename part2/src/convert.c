#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
        printf("Enter an integer   : ");
        scanf("%d", &x);
	printf("\n");
	printf("signed decimal     : %d\n", x); 
	unsigned int y;
	y=x;
	printf("unsigned decimal   : %u\n", y);
	printf("hexadecimal number : %x\n", y);
    return EXIT_SUCCESS;
}
