#include <stdio.h>
void main(){
	int num;
	printf("Enter a number : ");
	scsnf("%d", &num);
	if(num%2==0)
		printf("The given number is an even number");
	else
		printf("The given number is a odd number");
}

