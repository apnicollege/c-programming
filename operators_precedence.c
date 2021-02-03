/*
 * operators_precedence.c
 *
 *  Created on: Feb 4, 2021
 *      Author: imtiyazhirani
 */
#include <stdio.h>

int main(){
	int n=5;
	n++; //n = n+1
	n--;//n = n-1
	printf("n=%d\n",n);

	printf("*** increment inside print statement ***\n");
	int x=10;
	printf("x=%d",x++); //x++ = x=x+1
	printf("x=%d\n",x);

	int y =10;
	printf("y=%d",y--);
	printf("y=%d",y);
	return 0;
}

