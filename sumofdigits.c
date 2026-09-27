#include<stdio.h>
int main()
{
    int n,num,sod=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n%10!=0)
    {
        num=n%10;
        sod=sod+num;
        n=n/10;
    }
    sod=sod+n;
    printf("Sum of digits:%d",sod);
}