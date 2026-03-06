#include <stdio.h>
#include <string.h>
int main()
{
    int n,i;
    char str[50],str2[5];

    printf("enter string:");
    scanf("%s",&str);

    printf("%s",strrev(str));
    return 0;
}

