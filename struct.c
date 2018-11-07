#include <stdio.h>
#include <stdlib.h>

typedef struct car {
    unsigned int* year;
    unsigned int* odometer;
    char* model[10];
    char* plate[10];
    double* engine_size;
}car;

int *get_this(char prompt[25]){
    printf(prompt);
    int *tmp = NULL;
    tmp = malloc(sizeof(int));
    if (! tmp){
        printf("couldn't allocate memory.\n");
    }
    scanf("%d", tmp);
    return tmp;
}

int main(){ 
    int cars;
    printf("How many cars ? : ");
    scanf("%d", &cars);
    car *cararray[cars];

    for (int i = 0; i < cars; i++){
        cararray[i]->year = get_this("Enter make year: ");
        cararray[i]->odometer = get_this("Odometer reading: ");
    }

    for (int i=0; i < cars; i++){
        printf("Make year: %d\nOdometer reading: %d\n", *cararray[i]->year, *cararray[i]->odometer);
    }
    return 0;
}
