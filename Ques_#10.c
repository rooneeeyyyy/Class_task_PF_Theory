
#include<stdio.h>
#include<string.h>
int main()
{
    char items[100][50],name[50];
    float prices[100],total,amount;
    int n=0,choice,i,j,found,qty,count;
    while(1)
    {
        printf("\n1. Add Items and Prices\n");
        printf("2. Fetch List of Items\n");
        printf("3. Edit Prices of Items\n");
        printf("4. View All Items and Prices\n");
        printf("5. Create Receipt\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter number of items to add: ");
                scanf("%d",&count);
                if(count<=0||n+count>100)
                {
                    printf("Invalid input\n");
                    break;
                }
                for(i=0;i<count;i++)
                {
                    printf("Enter item name: ");
                    scanf(" %[^\n]",items[n]);
                    printf("Enter item price: ");
                    scanf("%f",&prices[n]);
                    n++;
                }
                break;
            case 2:
                if(n==0)
                {
                    printf("No items available\n");
                }
                else
                {
                    printf("List of Items:\n");
                    for(i=0;i<n;i++)
                    {
                        printf("%s\n",items[i]);
                    }
                }
                break;
            case 3:
                printf("Enter item name to edit price: ");
                scanf(" %[^\n]",name);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(strcmp(items[i],name)==0)
                    {
                        printf("Enter new price: ");
                        scanf("%f",&prices[i]);
                        printf("Price updated successfully\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Item not found\n");
                }
                break;
            case 4:
                if(n==0)
                {
                    printf("No items available\n");
                }
                else
                {
                    printf("\nItem\t\tPrice\n");
                    for(i=0;i<n;i++)
                    {
                        printf("%s\t\t%.2f\n",items[i],prices[i]);
                    }
                }
                break;
            case 5:
                printf("Enter number of different items purchased: ");
                scanf("%d",&count);
                if(count<=0)
                {
                    printf("Invalid input\n");
                    break;
                }
                total=0;
                printf("\n----------- RECEIPT -----------\n");
                printf("Item\t\tQty\tPrice\tAmount\n");
                for(i=0;i<count;i++)
                {
                    printf("Enter item name: ");
                    scanf(" %[^\n]",name);
                    printf("Enter quantity: ");
                    scanf("%d",&qty);
                    found=0;
                    for(j=0;j<n;j++)
                    {
                        if(strcmp(items[j],name)==0)
                        {
                            amount=prices[j]*qty;
                            total=total+amount;
                            printf("%s\t\t%d\t%.2f\t%.2f\n",items[j],qty,prices[j],amount);
                            found=1;
                            break;
                        }
                    }
                    if(found==0)
                    {
                        printf("Item %s not found\n",name);
                    }
                    if(qty<=0)
                    {
                        printf("Invalid quantity\n");
                    }
                }
                printf("-------------------------------\n");
                printf("Total Bill = %.2f\n",total);
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
