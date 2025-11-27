/*
Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[3];
    int i, top=0;

    for(i=0; i<3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    for(i=1; i<3; i++) {
        if(s[i].marks > s[top].marks) top = i;
    }

    printf("Topper: %s (Marks: %d)", s[top].name, s[top].marks);

    return 0;
}

