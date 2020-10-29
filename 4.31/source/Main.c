#include "stdio.h"
int main(){
	int i,j;
	
	for(i = 1; i <= 5; i++){

		
		for(j = 5 - i; j > 0; j--){
			printf(" ");
		}

		
		for(j = 1;j <= (-1 + 2 * i); j++){
			printf("*");
		}
		printf("\n");
	
	}

	
	for(i = 4; i > 0; i--){

		
		for(j = 5 - i; j > 0;j--){
			printf(" ");
		}

		
		for(j = 1;j <= ( - 1 + 2 * i );j++){
			printf("*");
		}
		printf("\n");

	}
return 0;
}
