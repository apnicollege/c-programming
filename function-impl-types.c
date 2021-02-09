/*
 * function-impl-types.c
 *
 *  Created on: Feb 9, 2021
 *      Author: imtiyazhirani
 */
#include <stdio.h>
int sum(int,int); //prototype
int main(){
	int n1;
	int n2;
	printf("Enter 2 int values\n");
	scanf("%d %d",&n1,&n2);
	int res = sum(n1,n2);
	printf("sum is %d", res);
	return 0;
}

int sum(int n1,int n2){
	return n1+n2;
}

