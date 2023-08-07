#include<stdio.h>
float f_to_c(float f);
void main()
{
    float ftemp;
    float ctemp;

    printf("Enter temperature in degrees F :");
    scanf("%f", &ftemp);
    ctemp =f_to_c(ftemp);
    printf("temp in degrees F = %3.1f\n",ftemp);
    printf("Temp in degrees C = %3.1f\n",ctemp);
}
