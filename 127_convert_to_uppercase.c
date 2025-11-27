/*
Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f1, *f2;
    int x;

    f1 = fopen("input.txt", "r");
    f2 = fopen("output.txt", "w");

    while((x = fgetc(f1)) != EOF) {
        if(x >= 'a' && x <= 'z') x = x - 32;
        fputc(x, f2);
    }

    fclose(f1);
    fclose(f2);

    return 0;
}
