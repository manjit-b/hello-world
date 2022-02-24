#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    c = a/b;
    printf("Quoient: %d\n",c);

    c = a%b;
    printf("Remainder: %d",c);
}