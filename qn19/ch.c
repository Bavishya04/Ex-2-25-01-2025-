#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isupper(ch)) 
    {
        printf("%c is an uppercase letter.\n", ch);
    }
    else if (islower(ch)) 
    {
        printf("%c is a lowercase letter.\n", ch);
    }
    else if (isdigit(ch))
    {
        printf("%c is a number.\n", ch);
    }
    else {
        printf("%c is neither an uppercase letter, lowercase letter, nor a number.\n", ch);
    }

    return 0;
}
