//GCD AND LCM
#include<stdio.h>
void gclc(int*,int*,int*,int*);
int main()
{
	int x,y,l,g;
	scanf("%d%d",&x,&y);
	gclc(&x,&y,&l,&g);
	printf("%d%d",l,g);
	return 0;
}
void gclc(int *a,int *b,int *l,int *g)
{
	int i;
	for(i=1;i<=*a&&i<=*b;i++)
	{
		if(*a%i==0&&*b%i==0)
		{
			*g=i;
		}
	}
	for(i=1;;i++)
	{
		if(i%*a==0&&i%*b==0)
		{
			*l=i;
			break;
		}
	}
}
