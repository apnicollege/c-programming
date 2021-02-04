/*
 * nested-for-reverse-star.c
 *
 *  Created on: Feb 4, 2021
 *      Author: imtiyazhirani
 */
#include <stdio.h>
int main(){
	for(int i=0;i<5;i++){
		for(int j=5 ;j>i;j--){ //5-i(0):5(*) , 5-i(1):4(*), 5-i(2):3(*), 5-i(3):2(*), 5-i(4):1(*)
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
//i = rows - (0 - 4) - next-line
//j - columns - (5 - 0/1/2/3/4) (5-i)
/*
 OUTPUT: star-pattern-reverse

 *****
 ****
 ***
 **
 *


 */
