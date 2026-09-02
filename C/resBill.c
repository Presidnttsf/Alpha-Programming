#include <stdio.h>
#include <string.h>

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
    
    int choice, quantity, count = 0;
    float grandTotal = 0;

     // Menu
    struct FoodItems menu[TOTAL_ITEMS] = {
        {"Biryani", BIRYANI_PRICE, 0, 0},
        {"Roti", ROTI_PRICE, 0, 0},
        {"Korma", KORMA_PRICE, 0, 0},
        {"Cold Drink", COLDRINK_PRICE, 0, 0},
        {"Lassi", LASSI_PRICE, 0, 0},
        {"Ice Cream", ICECREAM_PRICE, 0, 0},
        {"Steam Rice", STEAMEDRICE_PRICE, 0, 0},
        {"Veg Mix", VEGMIX_PRICE, 0, 0}
    };

       // Orders array
    struct FoodItems orders[TOTAL_ITEMS];
 // Display Menu
    printf("\n========== MENU ==============\n");
    printf("%-5s   %-15s %s", "S.No", "ITEMS", "PRICE\n");
    printf("==============================\n");
    for(int i=0; i<TOTAL_ITEMS; i++){

    printf("%d.      %-15s Rs. %d \n", i+1, menu[i].name, menu[i].price);
    }
    printf("==============================\n");

     while (1)
    {
        printf("\nEnter item number (0 to stop): ");
        scanf("%d", &choice);
        if(choice > 8) {
            printf("Invalid input");
            return 0;
        }
        if (choice == 0)
            break;

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        orders[count] = menu[choice - 1];
        orders[count].quantity = quantity;
        orders[count].total = orders[count].price * quantity;

        grandTotal += orders[count].total;
        count++;
    }

    printf("\n===== BILL =====\n");

    for (int i = 0; i < count; i++)
        printf("%s x %d = Rs.%.2f\n",
               orders[i].name,
               orders[i].quantity,
               orders[i].total);

    printf("-----------------\n");
    printf("Grand Total = Rs.%.2f\n", grandTotal);







    return 0;
}
