#include<stdio.h>
int main()
{
    int n,i,flag;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("The number is not a prime number");

    }
    else
    {
        printf("The number is a prime number");
    }
}