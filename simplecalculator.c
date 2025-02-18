#include <stdio.h>
void main(){
    int num1, num2;
    char op;
    printf("Enter num1, num2 and operator :");
    scanf("%d %d %c", &num1, &num2, &op);
    switch(op)
    {
    case '+': printf("The sum is %d", num1+num2); break;
    case '-': printf("The difference is %d", num1-num2); break;
    case '*': printf("The product is %d", num1*num2); break;
    case '/': {if(num2==0){printf("Invalid input");}
        else{printf("The quotient is %d", num1/num2);}} break;
    case '%': {if(num2==0){printf("Invalid input");}
        else{printf("The mod is %d", num1%num2);}}
    default: printf("Invalid operation");break;
    }
}
