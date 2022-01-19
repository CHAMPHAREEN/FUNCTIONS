//SIMPLE INTEREST
#include<stdio.h>
float simpl(float a,float b,float c)
{
    float d=(a*b*c)/100;
    return d;
}
int main()
{
    float p,t,r;
    printf("\nEnter Principal:");
    scanf("%f",&p);
    printf("\nEnter Time:");
    scanf("%f",&t);
    printf("\nEnter Rate:");
    scanf("%f",&r);
    simpl(p,t,r);
    float q=simpl(p,t,r);
    printf("Simple Interest is %f",q);
}
