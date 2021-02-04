/*
 * nested-for-star-pattern.c
 *
 *  Created on: Feb 4, 2021
 *      Author: imtiyazhirani
 */
#include <stdio.h>
int main(){
	for(int i=0 ; i<5 ; i++){ //i=0, 1
		for(int j=0 ; j<=i;j++){ //j=0,1 0<=1
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
// **

// i = rows; i=0-5 ; next-line
// j=columns; j=0 0 1 2 3 4
/*

 *
 **
 ***
 ****
 *****

 */
