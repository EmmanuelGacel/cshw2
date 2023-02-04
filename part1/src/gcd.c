#include <stdio.h>
#include <stdlib.h>
#include "iterative.h"
#include "recursive.h"

int main(int argc, char **argv) {
    
	if (argc != 3){
		fprintf(stderr, "Usage: ./gcd <integer m> <integer n>\n");
		return EXIT_FAILURE;
	}
	else{
		int one = atoi(argv[1]); //casts argument to int
		int two = atoi(argv[2]);
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
