#include <stdio.h>
#include <stdlib.h>

#define NAMESIZE 99

typedef struct {
    char *name;
    double price;
} item;

int main() {

    int shelf_count;
    int slot_count;
    int struct_row;
    int struct_column;
    int row_inventory;
    int column_inventory;
    char answer = 'y';
    int pass = 0;
    printf("%s", "How many shelves in the unit? ");
    scanf(" %d", &shelf_count);
    item **unit = NULL;
    unit = malloc(sizeof(item *) * shelf_count);
    printf("%s", "How many slots are available? ");
    scanf(" %d", &slot_count);
    for (int i = 0; i < shelf_count; i++)   {
        unit[i] = malloc(slot_count * sizeof(item));
    }
    printf("%s", "Do you wish to insert an item? (y or n) ");
    scanf(" %c", &answer);
    while (answer == 'y') {
        while (pass == 0) {
            printf("%s", "What is the item's location, starting with 0? (row)-(column) ");
            scanf(" %d%*c%d", &struct_row, &struct_column);
            if (struct_row > shelf_count - 1 || struct_column > slot_count - 1) {
                printf("%s\n", "These coordinates do not exist.");
            } else {
                pass = 1;
            }
        }
        printf("%s", "What is the item name? ");
        (unit[struct_row][struct_column]).name = malloc(NAMESIZE);
        scanf(" %s", (unit[struct_row][struct_column]).name);
        printf("%s", "What is the price of this item? ");
        scanf(" %lf", &(unit[struct_row][struct_column]).price);
        printf("%s", "Add another item? (y or n) ");
        scanf(" %c", &answer);
        pass = 0;
    }
    printf("%s", "Search for an item? (y or n) ");
    scanf(" %c", &answer);
    while (answer == 'y') {
        while (pass == 0) {
            printf("%s", "Enter coordinate of item, starting with 0: (row)-(column) ");
            scanf(" %d%*c%d", &row_inventory, &column_inventory);
            if (row_inventory > shelf_count - 1 || column_inventory > slot_count - 1) {
                printf("%s\n", "These coordinates do not exist.");
            } else {
                pass = 1;
            }
        }
        if ((unit[row_inventory][column_inventory].name) != NULL) {
            printf("%s%s\n%s%.2lf\n", "Name: ", unit[row_inventory][column_inventory].name, "Price: ",
                   unit[row_inventory][column_inventory].price);
        } else {
            printf("%s\n", "No item in this coordinate!");
        }
        printf("%s", "Check another coordinate? (y or n) ");
        scanf(" %c", &answer);
        pass = 0;
    }
}