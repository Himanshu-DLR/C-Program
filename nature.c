#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num>0)
    printf("The number is positive:%d",num);
    else if(num<0)
    printf("The number is negative:%d",num);
    else
    printf("The number is zero:%d",num);
    return 0;
}