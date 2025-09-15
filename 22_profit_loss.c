/*

Q22: Write a program to find profit or loss percentage given cost price and selling price.
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/#include <stdio.h>
int main()
{
    int profit, loss, cost_price, selling_price;
    printf("Enter Cost Price:");
    scanf("%d", &cost_price);
    printf("Enter Selling Price:");
    scanf("%d", &selling_price);
    profit = selling_price - cost_price;
    loss = cost_price - selling_price;
    if (selling_price > cost_price)
    {
        printf("profit percentage = %d%%\n", (profit * 100) / cost_price);
    }

    else if (cost_price > selling_price)
    {
        printf("loss percentage = %d%%\n", (loss * 100) / cost_price);
    }
    else
    {
        printf("No Profit No Loss\n");
    }
    return 0;
}
