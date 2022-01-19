//MAXIMUM OF TWO NUMBERS
#include<stdio.h>
void max(int a,int b)
{
    if(a>b)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
}
int main(void)
{
    max(10,5);
    return 0;
}
