#include <stdio.h>

int main() 
{
    float price, discount, final_price;
    printf("Enter the price of the purchase: ");
    scanf("%f", &price);
    if (price >= 1000) 
    {
          discount = 0.20 * price; 
    } 
    else if (price >= 500) 
    {
        discount = 0.10 * price; 
    } 
    else if (price >= 100) 
    {
        discount = 0.05* price;  
    } else
    {
        discount = 0;
    }

    
    final_price = price - discount;
    printf("Discount: $%.2f\n", discount);
    printf("Final Price after Discount: $%.2f\n", final_price);

    return 0;
}


