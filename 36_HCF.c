/*
Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/ 
#include<stdio.h>
int main()
{ int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) == 2) {
        int x = a < 0 ? -a : a;
        int y = b < 0 ? -b : b;
        while (y) {
            int t = x % y;
            x = y;
            y = t;
        }
        printf("gcd is %d", x);
    }
    return 0;
}