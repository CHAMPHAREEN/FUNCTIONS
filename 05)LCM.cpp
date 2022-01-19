//LCM OF TWO NUMBERS
#include<stdio.h>
int lcm(int c,int d);
int main()
{
	int a,b;
	printf("ENTER VALUES FOR a AND b:");
	scanf("%d %d",&a,&b);
	printf("THE LCM OF %d AND %d IS %d",a,b,lcm(a,b));
}
int lcm(int c,int d)
{
	int i,lcm;
	for(i=1;;i++)
	{
		if(i%c==0&&i%d==0)
		{
			lcm=i;
			break;
		}
	}
	   return lcm;
	
}
