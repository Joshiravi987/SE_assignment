#include <stdio.h>
typedef struct {
    char name[50];
    float price;
} FoodItem;
void displayMenu(FoodItem menu[], int menuSize) {
    printf("\nWelcome to the Food Billing System!\n");
    printf("Here are the available items:\n");
    for (int i = 0; i < menuSize; i++) {
        printf("%d. %s - $%.2f\n", i + 1, menu[i].name, menu[i].price);
    }
}
void takeOrder(FoodItem menu[], int menuSize) {
    int itemChoice, quantity;
    float totalBill = 0.0;
    char moreItems[4]; 
    
    while (1) {
        displayMenu(menu, menuSize);
        printf("Please choose an item by entering the number (1-%d): ", menuSize);
        scanf("%d", &itemChoice);

        if (itemChoice < 1 || itemChoice > menuSize) {
            printf("Invalid selection. Please choose a number between 1 and %d.\n", menuSize);
            continue;
        }
        printf("How many %s would you like to order? ", menu[itemChoice - 1].name);
        scanf("%d", &quantity);

        if (quantity < 1) {
            printf("Please enter a quantity greater than 0.\n");
            continue;
        }
        float itemCost = menu[itemChoice - 1].price * quantity;
        totalBill += itemCost;
        printf("%s x%d added to your order. Total so far: $%.2f\n", menu[itemChoice - 1].name, quantity, totalBill);

        printf("Would you like to add more items to your order? (yes/no): ");
        scanf("%s", moreItems);
        if (moreItems[0] != 'y' && moreItems[0] != 'Y') {
            break;
        }
    }
    printf("\nYour final bill:\n");
    printf("Total: $%.2f\n", totalBill);
    printf("Thank you for your order! Have a great day!\n");
}
int main() {
    FoodItem menu[] = {
        {"Pizza", 12.50},
        {"Burger", 8.99},
        {"Pasta", 10.75},
        {"Fries", 3.50},
        {"Salad", 5.25},
        {"Soda", 2.00}
    };
    int menuSize = sizeof(menu) / sizeof(menu[0]); 
    takeOrder(menu, menuSize);
    return 0;
}