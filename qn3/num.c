#include<stdio.h>
int main()
{
  int num;
  printf("Enter num=");
  scanf("%d",&num);
  if(num>0)
  {
   printf("The number is positive");
  }
  else if(num==0)
  {
   printf("The number is 0");
  }
  else
  {
   printf("The number is negative");
  }
return 0;
}
