#include <stdio.h>

int main(int argc, char *argv[]) {
    
    if (argc != 3){
        printf("Usage: echo \"some text\" <input-file>");
        return 1;
    }
    char *txt;
    txt = argv[1];
    char *input = argv[2];
    FILE *inputfile = fopen(input, "a");
    char c;
    int i = 0;
    while ( (c = *(txt+i)) != '\0' ){
       fputc(c, inputfile);
       i += 1;
    }
    return 0;
}
