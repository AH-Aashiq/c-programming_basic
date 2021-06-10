#include<stdio.h>
int main()
{
    float base,height,area;

    printf("Enter your value of base: ");
    scanf("%f",&base);

    printf("Enter your value of height: ");
    scanf("%f",&height);

    area = 0.5 * base * height;

    printf("Area of Triangle = %f\n",area);

    return 0;


}

