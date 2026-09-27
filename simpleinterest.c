#include<stdio.h>
int main()
{
    int principle,rate,time,Interest;
    printf("Enter the Principle,rate and time:");
    scanf("%d%d%d",&principle,&rate,&time);
    Interest = principle*rate*time; 
    printf("Simple Interest of above given data:%d",Interest);
    return 0;
}