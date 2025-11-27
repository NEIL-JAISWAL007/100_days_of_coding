/*
Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student getTopper(struct Student s[], int n) {
    int i, top=0;
    for(i=1; i<n; i++) {
        if(s[i].marks > s[top].marks) top = i;
    }
    return s[top];
}

int main() {
    struct Student s[3], topper;
    int i;

    for(i=0; i<3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    topper = getTopper(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d", topper.name, topper.roll_no, topper.marks);

    return 0;
}

