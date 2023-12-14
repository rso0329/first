#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("파일 열기에 실패했습니다.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

    return 0;
}