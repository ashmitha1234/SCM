#include <stdio.h>
void main(){
	int num;
	printf("Enter a number : ");
	scsnf("%d", &num);
	if(num%2==0)
		printf("The given number is even")
}

