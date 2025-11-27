/*
Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *p;
    int x, v = 0, c = 0;

    p = fopen("text.txt", "r");

    while((x = fgetc(p)) != EOF) {
        x = tolower(x);
        if(x >= 'a' && x <= 'z') {
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u') v++;
            else c++;
        }
    }

    fclose(p);

    printf("Vowels: %d\n", v);
    printf("Consonants: %d", c);

    return 0;
}
