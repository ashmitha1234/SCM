#include <stdio.h>
void main(){
	int num;
	printf("Enter the number : ");
	scanf("%d\n", &num);
	if(num % 2 == 0){
		printf("The given number is an even number\n");
	}
	else if(num % 2 != 0){
		printf("The given number is a odd number\n");
	}
	else{
		printf("Enter the correct choice\n");
	}
	return 0;
}

