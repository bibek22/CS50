#include <stdio.h>
#include <stdlib.h>


int main() {
    int k[4];
    k[0] = 1;
    k[3] = 4;

    int* pt = NULL;
    char* str = NULL;
    str = "this is an array of characters.";
    char a;
//    str = malloc(sizeof(char));
//    scanf("%c", &a);
//    *str = a;
    printf("%c%c\n", *(str+1), *(str+2));

    printf("str %s\n", str);
    printf("pointer str %p\n",  *str);
    printf("address of str %p\n", &str);

    pt = &k[2];
    printf("The value at pt is %d", *(pt+1));
    return 0;
}
