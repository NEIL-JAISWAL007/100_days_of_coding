/*
Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    char f[100], s[200];
    FILE *p;

    scanf("%s", f);
    getchar();
    fgets(s, sizeof(s), stdin);

    p = fopen(f, "a");
    fputs(s, p);
    fclose(p);

    printf("File updated successfully with appended text.");
    return 0;
}
