#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter an alphabet:");
    scanf("%c", &alpha);
    if(alpha>='A'&& alpha<='Z')
    {
        alpha=alpha+32;   
    }
    switch(alpha)
    {
        case 'a':
        printf("The alphabet is a vowel.");
        break;
        case 'e':
        printf("The alphabet is a vowel.");
        break;
        case 'i':
        printf("The alphabet is a vowel.");
        break;
        case 'o':
        printf("The alphabet is a vowel.");
        break;
        case 'u':
        printf("The alphabet is a vowel.");
        break;
        default:
        printf("The alphabet is a consonant.");
    }
    return 0;
}