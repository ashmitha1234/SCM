#include <stdio.h>
void main(){
    int num, i;
    int t1=0, t2=1;
    printf("Enter the number of terms : ");
    scanf("%d", &num);
    int next = t1 + t2;
    printf("Fibonacii series : %d, %d, ",t1 ,t2);
    for(i=3; i<=num; i++)
    {
            printf("%d, ", next);
            t1 = t2;
            t2 = next;
            next = t1 + t2;
}}
