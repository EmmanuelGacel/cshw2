
#include <stdio.h>
#include "recursive.h"


int answer;

int gcd_recursive(int m, int n) {

	if( m > n ){
		if( n  == 0 ){
			answer = m;
			return m;
		}
		int temp = m % n;
		return gcd_recursive(n, temp);
	}
	else if (n > m){
		if( m == 0){
			answer = n;
			return n;
		}
		int temp = n % m;
		return gcd_recursive(m, temp);
	}
	else{
		answer = m;
		return m; //could also be n, values of are the same
	}
}

printf("Recursive: gcd( %d, %d) = %d\n", one, two, answer);
return EXIT_SUCESS;

