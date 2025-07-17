#include <stdio.h>

int main() {
    float price, discount = 0.0, discounted_price;

    printf("Enter the price of the book: ");
    scanf("%f", &price);

    if (price < 100) {
        discount = 0.0;
    } else if (price >= 100 && price < 200) {
        discount = 0.10 * price;
    } else if (price >= 200 && price < 300) {
        discount = 0.20 * price;
    } else if (price >= 300) {
        discount = 0.30 * price;
    }

    discounted_price = price - discount;

    printf("Discounted price: %.2f\n", discounted_price);

    return 0;
}