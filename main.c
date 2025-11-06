#include <stdio.h>

int main(void) {
    char input[100];
    FILE*fp;
    char c;

    fp = fopen("sample.txt", "r");

    if (fp == NULL)
        printf("파일을 못열음\n");

     while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);
    
    system("PAUSE");
    return 0;
}
