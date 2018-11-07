#include <stdio.h> 
#include "linkedlist.h"


int main() {
    node *list;
    list = create();
    if (!list){
        fprintf(stderr, "Coudlnt' initialize list.");
        return 1;
    }
    int item = 0;
    int num;
    while (item < 3){
        printf("Enter some number to add: ");
        scanf("%d", &num);
        if(! add(list, num)){
            item++;
        }
    }
    printf("\nData items in the list \n************************\n");
    printeverything(list);
    printf("Enter number to search: ");
    scanf("%d", &num);
    if (search(list, num)){
        printf("Data found.\n");
    }else{
        printf("Data is not in the list.\n");
    }
    printf("Enter number to delete: ");
    scanf("%d", &num);
    delete(list, num);
    printf("\nData items in the list \n************************\n");
    printeverything(list);
    printf("Enter number to search: ");
    scanf("%d", &num);
    if (search(list, num)){
        printf("Data found.\n");
    }
    else{
        printf("Data is not in the list.\n");
    }
    printf("\nData items in the list \n************************\n");
    printeverything(list);
    printf("\nCleaning up!\n");
    demolish(list);
    return 0;
}
