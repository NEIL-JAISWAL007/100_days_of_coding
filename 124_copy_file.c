/*
Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    char s[100], d[100];
    FILE *f1, *f2;
    int x;

    scanf("%s", s);
    scanf("%s", d);

    f1 = fopen(s, "r");
    f2 = fopen(d, "w");

    while((x = fgetc(f1)) != EOF) {
        fputc(x, f2);
    }

    fclose(f1);
    fclose(f2);

    printf("File copied successfully to %s", d);
    return 0;
}
