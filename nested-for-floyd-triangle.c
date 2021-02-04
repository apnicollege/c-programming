/*
 * nested-for-floyd-triangle.c
 *
 *  Created on: Feb 4, 2021
 *      Author: imtiyazhirani
 */
#include <stdio.h>
int main(){
	int num = 1;
	for(int i=0 ; i<4;i++){
		for(int j=0;j<=i;j++){
			printf("%d ", num++);
		}
		printf("\n");
	}
	return 0;
}

//i=0 - rows - (0-3) - next-line
//j=0 - columns - (j-i)
/*
 OUTPUT: floyd triangle

 1
 2 3
 4 5 6
 7 8 9 10

 */
