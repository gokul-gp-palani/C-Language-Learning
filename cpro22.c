#include <stdio.h>
int main()
{
    int i,n,j,flag;
    printf("enter n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("not a prime\n");
            continue;
        }
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j ==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("prime\n");
        }
        else
        {
            printf("not a prime\n");
        }
    }
    return 0;
}