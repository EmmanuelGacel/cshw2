
#include <stdio.h>
#include "iterative.h"

int gcd_iterative(int m, int n) {

	int one = m, two = n; //save original values
	int temp, answer; //temp holder and variable for answer

	if( m > n ){;
		while (temp != 0){
			temp = m % n;
			m = n;
			n = temp;
		}
		answer = m;
	}
	else if( n > m){
		while (temp != 0){
			temp = n % m;
			n = m;
			m = temp;
		}
		answer = n;
	}
	else{
		answer =  m; //could also be n, case is they are the same}
	}
	printf("Iterative: gcd(%d, %d) = %d\n", one, two, answer);
	return 0;
}
