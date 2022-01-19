//GCD OF TWO NUMBERS
#include<stdio.h>
int gcd(int c,int d)
{
	int i,gcd;
	for(i=1;i<=c&&i<=d;i++)
	{
		if(c%i==0&&d%i==0)
		{
			gcd=i;
		}
	}
	   return gcd;
}
int main()
{
	int a,b;
	printf("\nENTER VALUES FOR a AND b:");
	scanf("%d %d",&a,&b);
	printf("GCD OF %d AND %d IS=%d",a,b,gcd(a,b));
	}
