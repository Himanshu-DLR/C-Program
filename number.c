#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int count= sizeof(arr)/sizeof(arr[0]);
    printf("Total element:%d",count);
    return 0; 
}