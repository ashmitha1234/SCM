#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest, amount;
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter time (in years): ");
    scanf("%lf", &time);
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;
    printf("Compound Interest = %.2lf\n", compoundInterest);
    printf("Total Amount = %.2lf\n", amount);
    return 0;
}
