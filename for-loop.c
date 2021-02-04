/*
 * for-loop.c
 *
 *  Created on: Feb 4, 2021
 *      Author: imtiyazhirani
 */
#include <stdio.h>
int main(){
	for(int i=0 ; i<10 ; i++ ){	 //i=0 , 1 , 2 , 3 .... 10
		printf("i=%d. welcome\n", i);
	}
	printf("** for considerations **\n");
	int j=0;
	for( ; j<5 ; ){	//0 1
		printf("thank you\n");
		j++;
	}
	printf("***** reverse **** \n");

	for(int k=5 ; k>0 ; k--){	//k=5  , 4, 3, 2, 1
		printf("reversal\n");
	}

	for( ;; ){ //makes no sense but syntax is correct so no error

	}
	for( int x = 0 ; x>=0; x++){ // 0  1 2 3 4 5 ........ --infinite loop

	}
 	return 0;
}
