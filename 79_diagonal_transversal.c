/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("Enter matrix elements:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal Traversal: ");
    for(int col=0; col<m; col++) {
        int i=0, j=col;
        while(i<n && j>=0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }
    for(int row=1; row<n; row++) {
        int i=row, j=m-1;
        while(i<n && j>=0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }
    printf("\n");
    return 0;
}

