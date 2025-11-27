/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);
    int n = strlen(s);
    int a[256] = {0};
    int i = 0, j = 0, ans = 0;
    while (j < n) {
        a[(int)s[j]]++;
        while (a[(int)s[j]] > 1) {
            a[(int)s[i]]--;
            i++;
        }
        if (j - i + 1 > ans) ans = j - i + 1;
        j++;
    }
    printf("%d", ans);
    return 0;
}
