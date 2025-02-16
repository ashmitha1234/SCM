#include <stdio.h>
void main(){
	int radius, pi=3.14;
	printf("Enter the radius of the circle");
	scanf("%d", &radius);
	float area = pi * radius * radius;
	printf("The area of the circle = %f", area);
}

