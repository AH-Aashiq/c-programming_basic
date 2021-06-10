//F = (c * 1.8) + 32
#include<stdio.h>
int main()
{
    float c,F;
    printf("Enter Centigrade : ");
    scanf("%f", &c);

    F = (c * 1.8) + 32;
    printf("Fahrenheit is = %.2f\n",F);
}
