#include<stdio.h>
int main()
{
    int a,b,c;
    int max;

    printf("enter the values of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);

    //  max = (a > b) ? ( (a > c) ? a : c ) : ( (b > c) ? b : c );
    //  the above is another way to find max

    if(a>b)
    {
        if(b>c)
        { printf("%d is max\n",a);}

        else{
            printf("%d is max\n",c);
        }
     }
     else
     {
        if(b>c)
        {
            printf("%d is max\n",b);
        }
        else
        {
            printf("%d is max\n",c);
        }
     }
     return 0;
}