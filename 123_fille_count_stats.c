/*
Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f;
    char s[500];
    int c = 0, w = 0, l = 0, i, in = 0;

    f = fopen("sample.txt", "r");

    while (fgets(s, sizeof(s), f)) {
        l++;
        for(i=0; s[i]!='\0'; i++) {
            c++;
            if(s[i] != ' ' && s[i] != '\n' && in == 0) {
                w++;
                in = 1;
            }
            if(s[i] == ' ' || s[i] == '\n') in = 0;
        }
    }

    fclose(f);

    printf("Characters: %d\n", c);
    printf("Words: %d\n", w);
    printf("Lines: %d\n", l);

    return 0;
}
