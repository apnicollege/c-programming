/*
 * nested-for-full-pyramid-numbers.c
 *
 *  Created on: Feb 7, 2021
 *      Author: imtiyazhirani
 */

#include <stdio.h>
int main(){
	for(int i=0;i<5;i++){//i=0,1,2,3,4
		int j=0;
		/* print the spaces */
		for(int j=5; j>i ;j--){
			printf(" ");
		}
		/* print the left numbers */
		for(; j<=i ;j++ ){
			printf("%d",j+1);
		}
		for(int k=j-1;k>0;k--){
			printf("%d",k);
		}
		printf("\n");

	}
	return 0;
}
/*
  OUTPUT: FULL PYRAMID-NUMBERS
sssss1
ssss121
sss12321
ss1234321
s123454321
 */
