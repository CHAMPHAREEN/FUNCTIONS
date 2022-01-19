//FACTORIAL
#include<stdio.h>
int fact(int x);
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int g=fact(n);
    printf("Factorial is %d",g);
}
int fact(int x)
{
    int f=1,i;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;

}
