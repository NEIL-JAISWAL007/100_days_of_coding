/*
Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main() {
    int n1, m1, n2, m2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &n1, &m1);
    int a[n1][m1];
    printf("Enter elements of first matrix:\n");
    for(int i=0;i<n1;i++)
        for(int j=0;j<m1;j++)
            scanf("%d", &a[i][j]);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &n2, &m2);
    int b[n2][m2];
    printf("Enter elements of second matrix:\n");
    for(int i=0;i<n2;i++)
        for(int j=0;j<m2;j++)
            scanf("%d", &b[i][j]);

    if(m1 != n2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int c[n1][m2];
    for(int i=0;i<n1;i++)
        for(int j=0;j<m2;j++) {
            c[i][j] = 0;
            for(int k=0;k<m1;k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    printf("Resultant Matrix:\n");
    for(int i=0;i<n1;i++) {
        for(int j=0;j<m2;j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
