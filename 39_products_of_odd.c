
/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    int n, digit, product = 1, c = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            c = 1;
        }
        n /= 10;
    }
    if (!c)
        product = 1;
    printf("Product of odd digits of number is %d", product);
    return 0;
}
