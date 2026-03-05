#include <stdio.h>
int main()
{
    int n,i;
    char str[50];
    printf("enter n:");
    scanf("%d",&n);

    printf("enter a string:");
    scanf("%s",&str);

    printf("%s\n",str);
    for(i=0;i<n;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}