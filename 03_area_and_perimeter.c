#include <stdio.h>
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
