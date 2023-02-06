#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	unsigned int y;
	int MSB;

        printf("Enter an integer   : ");
        scanf("%d", &x);
	printf("\n");
	y=x;
	MSB=(x & (0x1 << ((sizeof(x) << 3) - 1)));
	printf("signed decimal     : %d\n", x); 
	printf("unsigned decimal   : %u\n", y);
	printf("hexadecimal number : %x\n", y);
	printf("%d\n", MSB);
	

    return EXIT_SUCCESS;
}
