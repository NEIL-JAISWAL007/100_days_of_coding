/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    printf("Enter date (dd/mm/yyyy): ");
    gets(a);
    printf("%.2s-", a);
    if(a[3]=='0' && a[4]=='1') printf("Jan");
    else if(a[3]=='0' && a[4]=='2') printf("Feb");
    else if(a[3]=='0' && a[4]=='3') printf("Mar");
    else if(a[3]=='0' && a[4]=='4') printf("Apr");
    else if(a[3]=='0' && a[4]=='5') printf("May");
    else if(a[3]=='0' && a[4]=='6') printf("Jun");
    else if(a[3]=='0' && a[4]=='7') printf("Jul");
    else if(a[3]=='0' && a[4]=='8') printf("Aug");
    else if(a[3]=='0' && a[4]=='9') printf("Sep");
    else if(a[3]=='1' && a[4]=='0') printf("Oct");
    else if(a[3]=='1' && a[4]=='1') printf("Nov");
    else if(a[3]=='1' && a[4]=='2') printf("Dec");
    printf("-%s", a+6);
    return 0;
}
