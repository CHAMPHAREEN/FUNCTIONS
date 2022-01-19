//TO READ N RANDOM NUMBERS AND FIND SUM AND AVERAGE OF THEM
#include<stdio.h>
void cal(int *,int *,int *);
int main()
{
     int n,s=0,a=0;
     scanf("%d",&n);
     cal(&n,&s,&a);
     printf("the sum of numbers is %d",s);
     printf("\nthe average of numbers is %d",a);
 }
void cal(int *n,int *sum,int *avg)
{
	int i,x;
  for(i=1;i<=*n;i++)
  {
  	scanf("%d",&x);
  	*sum+=x;
  }
  *avg=*sum/(*n);
}

