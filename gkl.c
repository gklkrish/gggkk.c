#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the valueof c");
    scanf("%d",&c);
    
    if (a>b&&a>c)
    printf("a is big");
    else if(b>c&&b>a)
    printf("b is big");
    else
    printf("c is big");

}
