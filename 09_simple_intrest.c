#include <stdio.h>
#include<math.h>
float main()
{
    int p, t;
    float r;
    printf("enter the principal amount : ");
    scanf(" %d", &p);
    printf("enter the rate :");
    scanf(" %f", &r);
    printf("enter the  time :");
    scanf("%d", &t);
    printf("simple intrest is %f\n", (p * r * t) / 100);
    printf("Compound interest is :%f\n", p * pow((1+ r /100),t) -p);
    return 0.0;
}