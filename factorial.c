#include<stdio.h>
int main()
{
    int fact = 1,num,i= 1;

    printf("enter the nuber : ");
    scanf("%d",&num);

    while(i <= num)
    {
        fact = fact * i;
        i++;
    }
     printf("Factorial of %d = %d\n", num, fact);

    return 0;

}