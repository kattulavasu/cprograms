#include<stdio.h>
void main()
{
    char ch;
    printf("enter a character:");
    scanf("%c%c",&ch);
    switch(ch)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        printf("%c is a vowel",ch);
        break;
        default:printf("%c is a constant",ch);
        break;
    }
}
