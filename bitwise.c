#include<stdio.h>
int main()
{
    int a=10,b=5,c,d,e,f,g,h;
    c = a & b;
    d = a | b;
    e = a ^ b;
    f = ~a;
    g = a<<2;
    h = b>>2;
    printf("Bitwise AND of a and b is: %d\n",c);
    printf("Bitwise OR of a and b is: %d\n",d);
    printf("Bitwise XOR of a and b is: %d\n",e);
    printf("Bitwise NOT of a is: %d\n",f);
    printf("Left shift of a by 2 is: %d\n",g);
    printf("Right shift of b by 2 is: %d\n",h);
    return 0;
}