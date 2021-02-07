/*
 * nested-for-full-star.c
 *
 *  Created on: Feb 4, 2021
 *      Author: imtiyazhirani
 */
#include <stdio.h>
int main(){
	for(int i=0;i<5;i++){ //i=0,1,2,3,4
		/* print the spaces */
		for(int s=5; s>i ;s--){ //5, 4, 3, 2, 1 = 5 spaces
			printf(" ");
		}
		/* print the stars on the right */
		for(int j=0; j<=i ;j++){ //0(*), 1(**)...
			printf("*");
		}
		/* print the stars on the left */
		for(int k=0; k<i ;k++){
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
