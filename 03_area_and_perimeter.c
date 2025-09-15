/*

Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/#include <stdio.h>
int main()
{
    float length, breadth, area, perimeter;
    printf("the lentgh of rectangle is\n");
    scanf("%f", &length);
    printf("the breadth of rectangle is\n");
    scanf("%f", &breadth);
    printf("the area of rectangle is%f\n", length * breadth);
    printf("the perimeter of rectangle is%f\n", 2 * (length + breadth));

    return 0.0;
}
