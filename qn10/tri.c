#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter the length of side 1: ");
    scanf("%d", &side1);

    printf("Enter the length of side 2: ");
    scanf("%d", &side2);

    printf("Enter the length of side 3: ");
    scanf("%d", &side3);

    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) 
    {
       if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is Isosceles.\n");
        } 
        else {
            printf("The triangle is Scalene.\n");
        } 
    } 
    else{
    printf("Invalid triangle sides. Please enter valid positive lengths that form a triangle.\n");
    }
    

    return 0;
}



