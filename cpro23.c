#include <stdio.h>
int main()
{
    int heights[50],i;
    heights[0]=23;
    heights[2]=45;

    for(i=3;i<6;i++)
    {
        scanf("%d",&heights[i]);
    }

    for(i=0;i<3;i++)
    {
        printf("%d\n",heights[i]);
    }
    return 0;
}