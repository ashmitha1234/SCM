#include <stdio.h>
void main(){
    int num, rev, sum=0;
    printf("Enter a number : ");
    scanf("%d", &num); //153
    while(num!=0){
    int d = num % 10; //3 5 1
    sum = sum * 10 + d;
    num = num /10; //15 1 0
    }
    printf("Reversed number = %d", sum);
}
