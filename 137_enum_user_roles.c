/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/#include <stdio.h>
#include <string.h>

int main() {
    enum role {ADMIN, USER, GUEST};
    char s[10];
    enum role r;

    scanf("%s", s);

    if(strcmp(s,"ADMIN")==0) r = ADMIN;
    else if(strcmp(s,"USER")==0) r = USER;
    else if(strcmp(s,"GUEST")==0) r = GUEST;

    switch(r) {
        case ADMIN: printf("Welcome Admin!"); break;
        case USER: printf("Welcome User!"); break;
        case GUEST: printf("Welcome Guest!"); break;
    }

    return 0;
}

