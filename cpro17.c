#include <stdio.h>
#include <math.h>
int main()
{
    int n,copy,digit=0,sum=0;
    printf("enter a n:");
    scanf("%d",&n);
    copy=n;
    while(copy>0)
    {
     copy=copy/10;
     digit++;
    }
    copy=n;
    while(copy>0)
    {
        sum=sum+pow((copy%10),digit);
        copy=copy/10;
    }
    if(sum==n)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not an armstrong number");
    }
    return 0;
}