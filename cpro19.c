#include <stdio.h>
int main()
{
  int n,copy,rev=0;
  printf("enter n:");
  scanf("%d",&n);
  copy=n;
  while(copy>0)
  {
    rev=rev*10;
    rev=rev+(copy%10);
    copy/=10;
  }
  if(n==rev)
  {
    printf("palindrome");
  }
  else
  {
    printf("not a palindrome");
  }
  return 0;
}