
#include<stdio.h>
int main()
{
    int a,b,total=0;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a>b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while(a > 0)
    {
        if(a%2 != 0)
        {
            total = total + b;
        }
        a = a / 2;
        b = b * 2;
    }
    printf("Product = %d",total);
    return 0;
}
