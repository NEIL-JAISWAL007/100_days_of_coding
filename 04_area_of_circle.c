/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/#include <stdio.h>
int main()
{
    float a;
    printf("enter the radius of circle");
    scanf("%f", &a);
    float b;
    b = 3.14;
    printf("the circumference of circle is %f\n", 2*b*a);
    printf("the area of circle is %f\n", a * a * b);
    return 0.0;
}
