/*
 * user-defined-functions.c
 *
 *  Created on: Feb 9, 2021
 *      Author: imtiyazhirani
 */
#include <stdio.h>
void test(); //prototype
void display(){ //implementation : inline functions
	printf("display");
}
int main(){
	test(); //call
	display(); //call
	return 0;
}
//user defined function

void test(){ //implementation
	printf("test\n");
}





