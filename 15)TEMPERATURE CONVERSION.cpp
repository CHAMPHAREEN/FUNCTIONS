//TEMPERATURE CONVERSION
#include<stdio.h>
float convert(float a)
{
    float c=((a-32)*5)/9;
    return c;
}
main()
{
    float f;
    printf("Enter Farenheit:");
    scanf("%f",&f);
    convert(f);
    printf("%f-Celsius",convert(f));
}
