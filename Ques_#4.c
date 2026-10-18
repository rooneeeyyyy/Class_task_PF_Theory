
#include<stdio.h>
int main()
{
    float x,y;
    int count=0;
    printf("Enter initial height: ");
    scanf("%f",&x);
    printf("Enter minimum height: ");
    scanf("%f",&y);
    while(1)
    {
        x=x*2/3;
        count++;
        if(x<y)
        {
            break;
        }
    }
    printf("Number of bounces = %d",count);
    return 0;
}
