#include<stdio.h>
int main()
{
    int start,end,i;
    printf("Enter the starting range:");
    scanf("%d",&start);
    printf("Enter the ending range:");
    scanf("%d",&end);
    printf("Even numbers within the range %d to %d are:\n",start,end);
    for(i=start;i<=end;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    printf("Odd numbers within the range %d to %d are:\n",start,end);
    for(i=start;i<=end;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}