#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter your lowercase letter: ");
    scanf("%c",&lower);

    upper = toupper(lower);
    //toupper library function
    printf("The uppercase letter is: %c",upper);

    return 0;

}
