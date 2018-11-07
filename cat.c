#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2){
        printf("Usage: cat <file.name>\n");
        return 1;
    }
    char *infile = argv[1];
    FILE *file = fopen(infile, "r");
    if (!file){
        printf("Couldn't open file.\n");
        return 2;
    }
    char c;
    while ( (c = fgetc(file)) != EOF ){
        printf("%c", c);
    }
    return 0;
}
