#include <stdio.h>
void main(){
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	if(num%2==0)
		printf("The given number is an even number");
	else if(num%2!=0)
		printf("The given number is a odd number");
	else 
		printf("Invalid input");
}

