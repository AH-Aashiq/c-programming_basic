#include<stdio.h>
int main()
{
    char upper,lower;
    printf("Enter your upercase letter: ");
    scanf("%c",&upper);
    lower = tolower(upper);
    printf("The uppercase letter is: %c",lower);

    return 0;

}
