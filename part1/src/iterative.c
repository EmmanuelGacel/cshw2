
#include <stdio.h>
#include "iterative.h"

int gcd_iterative(int m, int n) {

	int temp;
	int answer;
	if( m > n ){
		while (temp != 0){
			temp = m % n;
			m = n;
			n = temp;
		}
		answer = m;
	else if( n > m){
		while (temp != 0){
			temp = n % m;
			n = m;
			m = temp;
		}
		answer = n;

	else{
		return m; //could also be n, case is they are the same
	}
	
	printf("Iterative: gcd( %d, %d) = %d\n", one, two, answer);
	return EXIT_SUCESS;
}
