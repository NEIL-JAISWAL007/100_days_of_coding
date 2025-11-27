/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>

int main() {
    enum menu {ADD, SUBTRACT, MULTIPLY};
    char choice[10];
    int a, b;
    enum menu m;

    scanf("%s %d %d", choice, &a, &b);

    if(strcmp(choice,"ADD")==0) m = ADD;
    else if(strcmp(choice,"SUBTRACT")==0) m = SUBTRACT;
    else if(strcmp(choice,"MULTIPLY")==0) m = MULTIPLY;

    switch(m) {
        case ADD: printf("%d", a+b); break;
        case SUBTRACT: printf("%d", a-b); break;
        case MULTIPLY: printf("%d", a*b); break;
    }

    return 0;
}
