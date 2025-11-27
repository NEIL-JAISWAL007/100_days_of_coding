/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
#include <string.h>

int main() {
    enum light {RED, YELLOW, GREEN};
    char s[10];
    enum light l;

    scanf("%s", s);

    if(strcmp(s, "RED") == 0) l = RED;
    else if(strcmp(s, "YELLOW") == 0) l = YELLOW;
    else if(strcmp(s, "GREEN") == 0) l = GREEN;

    switch(l) {
        case RED: printf("Stop"); break;
        case YELLOW: printf("Wait"); break;
        case GREEN: printf("Go"); break;
    }

    return 0;
}
