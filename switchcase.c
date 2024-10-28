#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("enter a,b values and operator:");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case'+':printf("the addition is:%d",a+b);
        break;
        case'-':printf("the subraction is:%d",a-b);
        break;
        case'*':printf("the multiplication is:%d",a*b);
        break;
        case'/':printf("the division is:%d",a/b);
        break;
        case'%':printf("the modolus is:%d",a%b);
        break;
        default:printf("Invalid output");
        break;
    }
}
