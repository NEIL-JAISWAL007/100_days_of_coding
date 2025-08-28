#include <stdio.h>
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
