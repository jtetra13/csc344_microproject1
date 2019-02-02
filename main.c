#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define INPUTSIZE 1
/*struct Node {
    char *name;
    int quantity;
    struct Node *next;
    struct Node *prev;
    struct Node *below;
    struct Node *above;
};


void insert(char *n, int q, struct Node **headRef) {
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode -> name = n;
    newNode -> quantity = q;
    if ((*headRef)->prev == NULL && (*headRef)->next == NULL && (*headRef)->below == NULL && (*headRef) -> above == NULL)  {
        *headRef = newNode;
    }
}

struct Node search(char name){

}*/

//char *line
int main() {

    char *input = malloc(sizeof(char) * 6);
    printf("%s", "WELCOME TO JUSTIN'S SKIP LIST!\n\nWhat do you wish to do? ");
    fgets(input, 7, stdin);
    if (strcmp(input, "insert") == 0) {
        printf("%s", "What is the item? ");
        while (!feof(stdin))    {
            printf(stdin);
        }
    }
}