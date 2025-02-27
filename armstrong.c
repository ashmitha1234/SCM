#include <stdio.h>
void main(){
    int num, copy, sum=0;
    printf("Enter a number : ");
    scanf("%d", &num); //153
    copy = num;
    while(num!=0){
    int d = num % 10; //3
    sum += d * d * d; //9
    num = num / 10; //15
    }
    if (sum == copy)
        printf("%d is an Armstrong number.", copy);
    else
        printf("%d is not an Armstrong number.", copy);
}
