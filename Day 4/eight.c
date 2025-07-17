// Read the price of book and caluculate the discount and find out discounted price.
// (if price was less than 200 then discount is 25% otherwise discount is 50%).

#include <stdio.h>

int main() {
    float price, discount, discounted_price;

    printf("Enter the price of the book: ");
    scanf("%f", &price);

    if (price < 200) {
        discount = 0.25 * price;
    } else {
        discount = 0.50 * price;
    }

    discounted_price = price - discount;

    printf("Discount: %.2f\n", discount);
    printf("Discounted price: %.2f\n", discounted_price);

    return 0;
}