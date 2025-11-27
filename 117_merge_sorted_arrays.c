/*
Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7
*/
#include <stdio.h>

int main() {
    int m, n, i=0, j=0, k=0;
    int a[100], b[100], c[200];

    scanf("%d", &m);
    for(int x=0; x<m; x++) scanf("%d", &a[x]);

    scanf("%d", &n);
    for(int x=0; x<n; x++) scanf("%d", &b[x]);

    while(i<m && j<n) {
        if(a[i] < b[j]) c[k++] = a[i++];
        else c[k++] = b[j++];
    }

    while(i<m) c[k++] = a[i++];
    while(j<n) c[k++] = b[j++];

    for(i=0; i<k; i++) printf("%d ", c[i]);

    return 0;
}
