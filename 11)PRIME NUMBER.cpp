//PRIME NUMBER
#include<stdio.h>
void prime(int n)
{
    int i,j,f;
    for(i=2;i<=n;i++)
    {
        f=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        printf("%d\n",i);
    }
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    prime(n);
}
