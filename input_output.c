/*
 * input_output.c
 *
 *  Created on: Feb 4, 2021
 *      Author: imtiyazhirani
 */
#include <stdio.h>

int main(){
	int n1;
	float n2;
	int n3,n4;
	printf("Enter int value\n"); //12
	scanf("%d",&n1); //n1=12
	printf("\nyou entered %d\n",n1);

	printf("Enter float value\n");
	scanf("%f",&n2);
	printf("\nYou entered %0.2f",n2);

	printf("Enter 2 int values\n");
	scanf("%d %d",&n3,&n4);
	printf("your values %d %d",n3,n4);
	return 0;
}
