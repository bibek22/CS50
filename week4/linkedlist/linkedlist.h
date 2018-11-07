#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
} node;

node *create(){
    // initializes a linked list with a 0 vlaue
    node *newnode = malloc(sizeof(node));
    if (!newnode){
        fprintf(stderr, "couldn't allocate memory.");
        return NULL;
    }else {
        newnode->number = 0;
        newnode->next = NULL;
        return newnode;
    }
}

int add(node *target, int data){
    // returns 0 if successfully added, 1 if not. returns 2 if data already in the list.
    while ( target->number != data && target->next != NULL){
        target = target->next;
    }
    if (target->next == NULL){
        node *new = malloc(sizeof(node));
        if (!new) {
            fprintf(stderr, "Couldn't allocate memory.");
            return 1;
        }
        target->number = data;
        new->next = NULL;
        new->number = 0;
        target->next = new;
        return 0;
    }else{
        return 2;
    }
}

int search(node *target, int data){
    // returns 1 if the data is found, 0 otherwise
    int found = 0;
    while (( target->number != data ) && (target->next != NULL)){
        target = target->next;
    }
    if (target->number == data){
        found = 1;
    }
    return found;
}

int delete(node *target, int data){
    node *prior = NULL;
    while (( target->number != data ) && (target->next != NULL)){
        prior = target;
        target = target->next;
    }
    if (target->number == data){
        node *next = target->next;
        free(target);
        prior->next = next;
        return 0;
    }else if (target->next == NULL){
        fprintf(stderr, "Data item not in the list.");
        return 1;
    }
}

void demolish(node *target){
    //frees up the heap memory used by the linked list.
    if (target->next == NULL){
        free(target);
    }
    demolish(target->next);
    free(target);
}

void printeverything(node *target){
    while (target->next != NULL){
        printf("%d\n", target->number);
        target = target->next;
    }
}
