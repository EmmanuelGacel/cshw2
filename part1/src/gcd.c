#include <stdio.h>
#include <stdlib.h>
#include "iterative.h"
#include "recursive.h"

int main(int argc, char **argv) {
    
	if (argc != 2){
		fprintf(stderr, "Usage: ./gcd <integer m> <integer n>\n");
		return EXIT_FAILURE;
	}
	else{
		int one = abs(atoi(argv[1])); //takes and casts absolute value of second argument
		int two = abs(atoi(argv[2])); //takes and casts  absolute value of first arugment
		if(one == 0 && two == 0){
			printf("gcd(0, 0) = undefined\n");
		}
		else{
			gcd_iterative(one, two);
			gcd_recursive(one, two);
		}
	}
    	return EXIT_SUCCESS;
}
