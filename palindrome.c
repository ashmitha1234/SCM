#include <stdio.h>
void main(){
    int num, rev, sum=0, copy;
    printf("Enter a number : ");
    scanf("%d", &num); //153
    copy = num;
    while(num!=0){
    int d = num % 10; //3 5 1
    sum = sum * 10 + d;
    num = num /10; //15 1 0
    }
    if (sum == copy)
        printf("%d is a Palindrome.", copy);
    else
        printf("%d is not a Palindrome.", copy);
}
