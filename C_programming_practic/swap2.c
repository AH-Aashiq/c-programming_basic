#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter First Number :");
    scanf("%d",&num1);
    printf("Enter Second Number :");
    scanf("%d",&num2);

    num1 = num1 - num2;//10-5=5
    num2 = num1 + num2;//5+5=10
    num1 = num2 - num1;//10-5=5

    printf("num1 = %d\n",num1);
    printf("num2 = %d\n",num2);

    return 0;
}
