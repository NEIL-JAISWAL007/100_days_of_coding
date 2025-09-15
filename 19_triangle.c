/*
Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the first side :");
    scanf("%f", &a);
    printf("Enter the second side :");
    scanf("%f", &b);
    printf("Enter the third side :");
    scanf("%f", &c);
    if (a + b > c)
{
        if (a == b && b == c)
        {
            printf("this is equilaterl triangle");
        }
        else if (a == b || b == c || c == a)
        {
            printf("this is an isosceles triangle");
        }

        else if ((a*a )+(b*b)==(c*c))
        {
            printf("this is right angle triangle ");
        }
        
        else
        {
            printf("this is scalene triangle ");
        }
    
    }
    else
    {
        printf("the triangle is invalid");
    }
    return 0;
}
