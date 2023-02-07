#include <stdio.h>
#include <stdlib.h>

int main() {
        int x;
        unsigned int y;
        int size;
        size = sizeof(y) * 8; //Uses sizeof to calculate the total number of bites
        printf("Enter an integer   : "); //Asks the user for an integer
        scanf("%d", &x); //uses scanf to take in a userdefined integer
        printf("\n");
        y=x; //Setting an unsigned integer to the value of the user-defined integer
        printf("signed decimal     : %d\n", x); //Prints the signed decimal number
        printf("unsigned decimal   : %u\n", y); //Prints the unsigned decimal integer
        printf("hexadecimal number : %x\n", y); //Prints the hexadecimal number by casting it w/ %x
	printf("binary             : "); //Biary number print statement
	//This loop constructs a binary number with a 1 in the n-i position, and 0s everywhere else
	//The loop then calls a bitwise and on the usertifined unsigned integer and the generated binary number
	//If the number is greater than 0 it prints a 1, if it less than 1 it prints a 0
	while(size > 0){
                if (y & (0x1 << (size - 1))) //Takend from recitation #2, MSB demonstration
                putc('1', stdout);
                else
                putc('0', stdout);
                //Inserts spaces every 4 bits
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
        printf("\n");

    return EXIT_SUCCESS;
}

