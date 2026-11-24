#include<stdio.h>
int main()
{
    int n;
    printf("Enter  an number:");
    scanf("%d",&n);
    if(n%4==0&&n%6==0)
    printf("%d is divisible by both 4 and 6",n);
    else                            
    printf("%d is not divisible by both 4 and 6",n);
    return 0;
}