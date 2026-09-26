#include<stdio.h>
int main()
{
    int n,num,rev=0;
    printf("Enter the number:-");
    scanf("%d",&n);
    while(n/10!=0)
    {
    num=n%10;
    rev=rev*10+num;
    n=n/10;
    }
    rev=rev*10+n;
    printf("Reverse number is:%d",rev);
    return 0;
}