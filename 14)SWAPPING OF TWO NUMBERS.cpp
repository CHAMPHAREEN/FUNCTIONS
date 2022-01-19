//SWAPPING OF TWO NUMBERS
#include<stdio.h>
int swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    printf("\n%d is a",a);
    b=c;
    printf("\n%d is b",b);
}
int main()
{
    int a,b;
    printf("\nEnter a:");
    scanf("%d",&a);
    printf("\nEnter b:");
    scanf("%d",&b);
    swap(a,b);
}
