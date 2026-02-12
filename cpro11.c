#include <stdio.h>
int main()
{
    int num1,num2;
    char op;

    printf("enter a num1:");
    scanf("%d",&num1);
     
    printf("entar a num2:");
    scanf("%d",&num2);

    printf("enter operator:");
    scanf("\n%c",&op);

    switch (op)
    {
        case'+':
        printf("sum:%d",num1+num2);
        break;

        case'-':
        printf("sum:%d",num1-num2);
        break;

        case'*':
        printf("sum:%d",num1*num2);
        break;

        case'/':
        printf("sum:%d",num1/num2);
        break;

        default:
        printf("invalid operator");
    }
    return 0;
}