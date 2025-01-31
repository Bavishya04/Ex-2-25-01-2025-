#include <stdio.h>

int main() {
    int num1, num2, num3;
    int large, small;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    large = num1;
    
    
    if (num2 > large)
    {
        large = num2;
    }
    
    if (num3 > large) 
    {
        large = num3;
    }
    small = num1;

    if (num2 < small) 
    {
        small = num2;
    }
    if (num3 < small) 
    {
        small = num3;
    }
    printf("Largest number is: %d\n", large);
    printf("Smallest number is: %d\n", small);

    return 0;
}


