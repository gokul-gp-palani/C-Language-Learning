#include <stdio.h>

int main()
{
    int num1,num2;
    char operator;
    printf("enter a num1:");
    scanf("%d",&num1);

    printf("enter a num2:");
    scanf("%d",&num2);

    printf("enter a operator:");
    scanf("\n%c",&operator);
      
    if(operator=='+')
        {
        printf("sum:%d",num1+num2);
        }
        else if(operator=='-')
        {
            printf("sum:%d",num1-num2);
        }
        else if(operator=='*')
        { 
            printf("sum:%d",num1*num2);
        }
        else if(operator=='/')
        {
            printf("sum:%d",num1/num2);
        }
        else 
        {
            printf("invalid operator");
        }
        return 0;

}