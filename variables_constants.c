#include <stdio.h>
#define x1 10
int main(){
	//variables
	int n1=4;
	float n2= 4.2;
	char c1 = 'A';

	//constant variables
	const int x=5;

	printf("value of n1 is %d\n", n1);
	printf("value of n2 is %0.2f\n", n2);
	printf("value of c1 is %c\n", c1);

	printf("value of constant x is %d\n", x);
	printf("value of constant x1 is %d\n", x1);
	//change variable values
	n1=5;
	n2=4.5;
	c1='a';
	//x=6; - x is constant cannot change the value.
	printf("***changed values****\n");
	printf("value of n1 is %d\n", n1);
	printf("value of n2 is %0.2f\n", n2);
	printf("value of c1 is %c\n", c1);
	return 0;
}
