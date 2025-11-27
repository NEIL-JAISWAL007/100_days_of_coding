/*

Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>

int main() {
    enum Gender {MALE, FEMALE, OTHER};
    struct Person {
        enum Gender g;
    } p;

    char s[10];
    scanf("%s", s);

    if(strcmp(s,"MALE")==0) p.g = MALE;
    else if(strcmp(s,"FEMALE")==0) p.g = FEMALE;
    else if(strcmp(s,"OTHER")==0) p.g = OTHER;

    switch(p.g) {
        case MALE: printf("Male"); break;
        case FEMALE: printf("Female"); break;
        case OTHER: printf("Other"); break;
    }

    return 0;
}
