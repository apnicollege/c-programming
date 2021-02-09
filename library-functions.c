/*
 * library-functions.c
 *
 *  Created on: Feb 7, 2021
 *      Author: imtiyazhirani
 */

#include <stdio.h>
#include <math.h>
#include <ctype.h>
 int main(){

	 //isdigit(char) : 0/1
	 //digit: 0-9
	 int x='a'; //ASCII 0-9: 48-57 A-Z: 65-91 a-z: 97-122
	 if(!isdigit(x)){
		 printf("Invalid input");
		 return -1;
	 }
	 //sqrt: math.h : sqrt(int): double
	 int num = x - '0';
	 printf("square root of %d is %0.2lf",num,sqrt(num));
	 return 0;
}
