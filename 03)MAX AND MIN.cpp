//MAXIMUM AND MINIMUM OF TWO NUMBERS
#include<stdio.h>
void maxmin(int*,int*,int*,int*);
int main()
{
	int c,d,max,min;
	scanf("%d%d",&c,&d);
	maxmin(&c,&d,&max,&min);
	printf("%d\n%d",max,min);
}
void maxmin(int*a,int*b,int*e,int*f)
{
	if(*a<*b)
	{
	     *e=*b;
	     *f=*a;
	}
	else
	{
		*f=*b;
		*e=*a;
	}
}
