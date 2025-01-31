#include <stdio.h>

int main() 
{
    int num, root=0;
    printf("Enter a number: ");
    scanf("%d", &num);
   if (num < 0) {
        printf("%d is NOT a perfect square.\n", num);
        return 0;
    }

    
    while (root * root < num) {
        root++;
    }

    if (root * root == num) 
    {
       printf("%d is a perfect square.\n", num);
    }
    else
    {
       printf("%d is NOT a perfect square.\n", num);
    }
return 0;
}
   

    
