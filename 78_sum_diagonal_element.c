/*
Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    int sum = 0;
    for (int i = 0; i < n && i < m; i++)
        sum += a[i][i];

    printf("Sum of main diagonal elements: %d\n", sum);
    return 0;
}

