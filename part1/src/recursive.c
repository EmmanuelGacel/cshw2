
#include <stdio.h>
#include <stdlib.h>
#include "recursive.h"

int gcd_helper(int m, int n){

        if( m > n ){
                if( n  == 0 ){
                        return m;
                }
                return gcd_helper(n, m % n);
        }
        else if (n > m){
                if( m == 0){
                        return n;
                }
                return gcd_helper(m, n % m);
        }
        else{
                return m; //could also be n, values of are the same
        }

}

int gcd_recursive(int m, int n) {

	printf("Recursive: gcd(%d, %d) = %d\n", m, n, gcd_helper(abs(m),abs(n))); //passes abs to helper
	return 0;

}


