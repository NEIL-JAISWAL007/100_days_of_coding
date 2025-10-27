/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    printf("Enter the number: ");
    scanf("%lld", &num);

    int count[10] = {0};
    long long temp = num;
    while(temp != 0) {
        int digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    int maxCount = count[0];
    int digitMax = 0;

    for(int i = 1; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            digitMax = i;
        }
    }

    printf("Most frequent digit: %d\n", digitMax);

    return 0;
}
