/*
 * switch_case.c
 *
 *  Created on: Feb 4, 2021
 *      Author: imtiyazhirani
 */
#include <stdio.h>
int main(){
	//operator(+ - * /)
	//n1 n2

	char op;
	int n1,n2;

	printf("Enter the operator\n");
	scanf("%c",&op);
	printf("Enter 2 int numbers\n");
	scanf("%d%d",&n1,&n2);

	switch(op){ //+
	case '+':
		printf("Result is %d", n1+n2);
		break;
	case '-':
		printf("Result is %d", n1-n2);
		break;
	case '*':
		printf("Result is %d", n1*n2);
		break;
	case '/':
		printf("Result is %d", n1/n2);
		break;
	default:
		printf("Invalid opertor entered");
		break;
	}

	return 0;
}
