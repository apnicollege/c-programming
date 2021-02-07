/*
 * nested-for-full-star.c
 *
 *  Created on: Feb 4, 2021
 *      Author: imtiyazhirani
 */
#include <stdio.h>
int main(){
	for(int i=0; i<5 ;i++){ //i=0, 1, 2, 3, 4 = rows
		/* print the spaces*/
		for(int s=5;s>i ;s--){ //5>0(5s), 5>1(4s), 5>2(3s), 5>3(2s), 5>4(1s)
			printf(" ");
		}
		/* print the left side stars*/
		for(int j=0; j<=i ;j++){ //0<=0(1*), 0<=1(2*), 0<=2(3*),  0<=3(4*), 0<=4(5*)
			printf("*");
		}
		/* print the right side stars*/
		for(int k=0; k<i;k++ ){ //k=0<0(), 0<1(1*), 0<2(2*), 0<3(3*), 0<4(4*)
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


/*
 OUTPUT: full star-pattern
sssss*
ssss***
sss*****
ss*******
s*********
*/
