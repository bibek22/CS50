#include <stdio.h>

int main(int argc, char *argv[]) {
    
    if (argc != 3){
        printf("Usage: cp <input-file>  <dest-file>");
        return 1;
    }

    FILE *input;
    FILE *dest;
    input = fopen(argv[1], "r");
    dest = fopen(argv[2], "w");

    char c;
    while ((c = fgetc(input)) != EOF) {
        fputc(c, dest);
    }

    return 0;
}
