#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
     printf("Enter the 2nd number: ");
    scanf("%d", &b);
     printf("Enter the 3rd number: ");
    scanf("%d", &c);

    if (a >= b) {
        if (a>=c) {
            printf("The largest number is %d\n", a);
        } else {
            printf("The largest number is %d\n", c);
        }
    } else {
        if (b >=c) {
            printf("The largest number is %d\n", b);
        } else {
            printf("The largest number is %d\n", c);
        }
    }

    return 0;
}
