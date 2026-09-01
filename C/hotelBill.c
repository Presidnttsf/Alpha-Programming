#include <stdio.h>

#define BIRYANI_PRICE 200
#define ROTI_PRICE 20
#define KORMA_PRICE 150
#define COLDRINK_PRICE 50
#define LASSI_PRICE 70
#define ICECREAM_PRICE 100
#define STEAMEDRICE_PRICE 100
#define VEGMIX_PRICE 120
#define TOTAL_ITEMS 8

struct FoodItems {
    char name[20];
    int price;
    int quantity;
    float total;
};

int main()
{
    struct FoodItems order = {
        "Biryani", BIRYANI_PRICE, 2, BIRYANI_PRICE * 2
    };

    struct FoodItems order1 = {
        "Korma", KORMA_PRICE, 1, KORMA_PRICE * 1
    };

    struct FoodItems order2 = {
        "Steam Rice", STEAMEDRICE_PRICE, 1, STEAMEDRICE_PRICE * 1
    };

    struct FoodItems ordersArr[] = {
        order,
        order1,
        order2
    };

    int sizeOfOrdersArr = sizeof(ordersArr) / sizeof(ordersArr[0]);

    // Table Header
    printf("\n");
    printf("%-5s %-15s %-10s %-10s %-10s\n",
           "No.", "Item", "Price", "Quantity", "Total");

    printf("------------------------------------------------------------\n");

    // Display Items
    for (int i = 0; i < sizeOfOrdersArr; i++) {
        printf("%-5d %-15s %-10d %-10d %-10.2f\n",
               i + 1,
               ordersArr[i].name,
               ordersArr[i].price,
               ordersArr[i].quantity,
               ordersArr[i].total);
    }

    // Calculate Grand Total
    float grandTotal = 0;

    for (int i = 0; i < sizeOfOrdersArr; i++) {
        grandTotal += ordersArr[i].total;
    }

    // Display Grand Total
    printf("------------------------------------------------------------\n");
    printf("%-5s %-15s %-10s %-10s %-10.2f\n",
           "", "", "", "Grand Total:", grandTotal);

    return 0;
}
