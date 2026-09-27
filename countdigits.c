#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the digits:");
    scanf("%d",&n);
    while(n%10!=0)
    {
        count=count+1;
        n=n/10;
    }
    printf("Count of digits of number:%d",count);
}