//area of retangle = length * width//
#include<stdio.h>
int main()
{
    float length,width,area;

    printf("Enter length: ");
    scanf("%f",&length);
    printf("Enter width:");
    scanf("%F",&width);

    area = length * width;
    printf("Area of Retangle is =%.2f",area);

    return 0;
}
