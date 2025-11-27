/*
Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

int main() {
    FILE *p;
    char n[50];
    int r, m, i, num;

    scanf("%d", &num);

    p = fopen("students.txt", "w");
    for(i=0; i<num; i++) {
        scanf("%s %d %d", n, &r, &m);
        fprintf(p, "%s %d %d\n", n, r, m);
    }
    fclose(p);

    p = fopen("students.txt", "r");
    for(i=0; i<num; i++) {
        fscanf(p, "%s %d %d", n, &r, &m);
        printf("Name: %s | Roll: %d | Marks: %d\n", n, r, m);
    }
    fclose(p);

    return 0;
}
