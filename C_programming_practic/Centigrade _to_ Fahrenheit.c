#include <stdio.h>
int main()
{

    float c,F;
    printf("Enter Centigrade value : ");
    scanf("%f",&c);

    F = (c * 1.8) + 32;
    printf("Fahrenheit= %.2f\n", F);

    return 0;

}


