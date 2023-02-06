#include <stdio.h>
#include <stdlib.h>

int main() {
        int x;
        unsigned int y;
        int size;
        //int MSB;
        size = sizeof(y) * 8;
        //printf("%d\n", size);
        printf("Enter an integer   : ");
        scanf("%d", &x);
        printf("\n");
        y=x;
        printf("signed decimal     : %d\n", x);
        printf("unsigned decimal   : %u\n", y);
        printf("hexadecimal number : %x\n", y);
        //MSB=(y & (0x1 << ((sizeof(x) << 3) - 1)));
        //if ((y & (0x1 << ((sizeof(x) << 3) - 1))))
        //      putc('1', stdout);
        //else
        //      printf("Positive\n");
        //printf("%d\n",MSB);
        //y=(y >> 31);
        //printf("%u\n", y);
	printf("binary             : ");
	while(size > 0){
                if (y & (0x1 << (size - 1)))
                putc('1', stdout);
                else
                putc('0', stdout);
                //printf("%d", size);
		if ( size == 29)
                        printf(" ");
                if ( size == 25)
                        printf(" ");
		if ( size == 21)
                        printf(" ");
                if ( size == 17)
                        printf(" ");
		if ( size == 13)
                        printf(" ");
                if (size == 9)
                        printf(" ");
		if ( size == 5)
                        printf(" ");
                size --;

        }
        //MSB = (MSB&1);
        printf("\n");

    return EXIT_SUCCESS;
}

