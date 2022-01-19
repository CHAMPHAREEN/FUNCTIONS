//EVEN OR ODD
#include<stdio.h>
void even(int a)
{
    if(a%2==0)
    {
        printf("\n%d is even",a);
    }
    else
    printf("\n%d is odd",a);
}
int main(void)
{
    int n;
    printf("\nEnter n:");
    scanf("%d",&n);
    even(n);
    return 0;
}
