/*
Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e;
    FILE *p;

    scanf("%s %d %f", e.name, &e.id, &e.salary);

    p = fopen("employee.dat", "wb");
    fwrite(&e, sizeof(struct Employee), 1, p);
    fclose(p);

    struct Employee r;
    p = fopen("employee.dat", "rb");
    fread(&r, sizeof(struct Employee), 1, p);
    fclose(p);

    printf("Name: %s | ID: %d | Salary: %.2f", r.name, r.id, r.salary);

    return 0;
}
