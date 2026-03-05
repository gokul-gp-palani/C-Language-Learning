#include <stdio.h>
#include <string.h>
int main()
{
    int n,i;
    char str[50],str2[5];
    printf("enter string1:");
    scanf("%s",&str);

    printf("enter string2:");
    scanf("%s",&str2);

    strcat(str,str2);
   
    printf("%s\n",str);
   
    return 0;
}