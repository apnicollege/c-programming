/*
 * nested-for-number-pyramid.c
 *
 *  Created on: Feb 4, 2021
 *      Author: imtiyazhirani
 */
#include <stdio.h>
int main(){
	for(int i=0;i<5;i++){ //i=0-4
		for(int j=0 ; j<=i ; j++){ //j=0-i(0) , j=0-i(1) , j=0-i(2), j=0-i(3), j=0-i(4)
			printf("%d",j+1);
		}
		printf("\n");
	}
	return 0;
}

// i = rows, i=0-4 , next-line
// j = columns, j(0-4)
/*
 OUTPUT: number pyramid

 1
 12
 123
 1234
 12345

 */
