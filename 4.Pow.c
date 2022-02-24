#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d", &a);

    printf("Enter power: ");
    scanf("%d", &b);

    printf("Ans: %.0f", pow(a, b));
}