
#include<stdio.h>
int main()
{
    int n,i;
    float num,largest,lowest;
    printf("Enter total numbers: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid input");
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%f",&num);
        if(i==1)
        {
            largest=num;
            lowest=num;
        }
        else
        {
            if(num>largest)
            {
                largest=num;
            }
            if(num<lowest)
            {
                lowest=num;
            }
        }
    }
    printf("Largest number = %.2f\n",largest);
    printf("Lowest number = %.2f",lowest);
    return 0;
}
