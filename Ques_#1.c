#include<stdio.h>
int main()
{
    int n,digit,product,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n >= 10)
    {
        product = 1;
        while(n > 0)
        {
            digit = n % 10;
            product = product * digit;
            n = n / 10;
        }
        n = product;
        count++;
    }
    printf("Persistence = %d",count);
    return 0;
}
