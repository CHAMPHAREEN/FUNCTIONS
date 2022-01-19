//ARITHMETIC OPERATIONS
#include<stdio.h>
void add(int a,int b)
{
    int c=a+b;
    printf("\nSum is %d",c);
}
void diff(int a,int b)
{
    int c=a-b;
    printf("\nDifference is %d",c);
}
void pro(int a,int b)
{
    int c=a*b;
    printf("\nProduct is %d",c);
}
void div(int a,int b)
{
    int c=a/b;
    printf("\nDivision is %d",c);
}
main()
{
    int a,b;
    printf("\nEnter a:");
    scanf("%d",&a);
    printf("\nEnter b:");
    scanf("%d",&b);
    add(a,b);
    diff(a,b);
    pro(a,b);
    div(a,b);
}
