#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter a: \n");
   scanf("%d",&a);
   printf("Enter b: \n");
   scanf("%d",&b);
   printf("Before Swapping : a=%d , b=%d \n",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("After Swapping : a=%d , b=%d \n",a,b);
   return 0;
}

