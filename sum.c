#include<stdio.h>
int main()
{
    double a,b;
    double sum;

    printf("enter value of a: ");
    scanf("%lf", &a);

    printf("enter value of b: ");
    scanf("%lf", &b);

    sum = a + b;

    printf("sum = %.3lf\n",sum);

    return 0;

}