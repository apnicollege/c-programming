/*
 * if-else.c
 *
 *  Created on: Feb 4, 2021
 *      Author: imtiyazhirani
 */
#include <stdio.h>
int main(){
	 //marks >= 75: A, marks>=60: B else marks>=40: C else D
	int marks;
	printf("Enter the marks secured\n");
	scanf("%d",&marks);

	if(marks >= 75){
		printf("Grade is A");
	}
	else
	if(marks>=60){
		printf("Grade is B");
	}
	else
	if(marks>=40){
		printf("Grade is C");
	}
	else{
		printf("Grade is D");
	}


	return 0;
}

