#include <stdio.h>
int main(){
	int num1, num2, copy;
	printf("Enter num1 and num2 : ");
	scanf("%d %d", &num1, &num2);
	copy=num1;
	num1=num2;
	num2=copy;
	printf("After swapping, num1 = %d and num2 = %d", num1, num2);
	return 0;
}
