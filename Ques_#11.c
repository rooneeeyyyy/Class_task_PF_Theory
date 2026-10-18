
#include<stdio.h>
#include<string.h>
int main()
{
    char tasks[12][31][100]={0};
    int year,choice,month,day,i,j;
    printf("Enter year: ");
    scanf("%d",&year);

    strcpy(tasks[0][4],"Submit Assignment");
    strcpy(tasks[1][9],"Prepare for Quiz");
    strcpy(tasks[2][14],"Project Meeting");
    strcpy(tasks[5][19],"Submit Report");
    strcpy(tasks[8][24],"Attend Seminar");
    strcpy(tasks[11][4],"Final Exam");

    while(1)
    {
        printf("\nCalendar Year: %d\n",year);
        printf("1. Add a Task\n");
        printf("2. Remove a Task\n");
        printf("3. Show Tasks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter month number: ");
                scanf("%d",&month);
                printf("Enter day: ");
                scanf("%d",&day);
                if(month<1||month>12||day<1||day>31)
                {
                    printf("Invalid date\n");
                    break;
                }
                printf("Enter task details: ");
                scanf(" %[^\n]",tasks[month-1][day-1]);
                printf("Task added successfully\n");
                break;

            case 2:
                printf("Enter month number: ");
                scanf("%d",&month);
                printf("Enter day: ");
                scanf("%d",&day);
                if(month<1||month>12||day<1||day>31)
                {
                    printf("Invalid date\n");
                    break;
                }
                if(strlen(tasks[month-1][day-1])==0)
                {
                    printf("No task found on this date\n");
                }
                else
                {
                    tasks[month-1][day-1][0]='\0';
                    printf("Task removed successfully\n");
                }
                break;

            case 3:
                for(i=0;i<12;i++)
                {
                    printf("\nMonth %d:\n",i+1);
                    for(j=0;j<31;j++)
                    {
                        if(strlen(tasks[i][j])>0)
                        {
                            printf("Day %d: %s\n",j+1,tasks[i][j]);
                        }
                    }
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
