/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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
    printf("Matrix entered:\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    int flag = 1;
    for(int i=0;i<n && i<m;i++)
        for(int j=i+1;j<n && j<m;j++)
            if(a[i][i] == a[j][j])
                flag = 0;
    if(flag)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
