#include <stdio.h>
void main(){
    int num, fact=1, i;
    printf("Enter a Number : ");
    scanf("%d", &num);
    for(i=1;i<=num;i++){
        fact*=i;
    }
    printf("The factorial of the given number is : %d", fact);
}
