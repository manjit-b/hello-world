#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter first number:");
    scanf("%f", &a);

    printf("Enter second number:");
    scanf("%f", &b);

    printf("A + B = %.2f\n",a+b);
    printf("A - B = %.2f\n",a-b);
    printf("A * B = %.2f\n",a*b);

    printf("A / B = %.2f\n",a/b);

    return 0;
}
