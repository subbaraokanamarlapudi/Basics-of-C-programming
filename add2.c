#include<stdio.h>

int main()
{
    int a,b,sum; // sub,mul,div,mod

    printf("Enter 'a' number: ");
    scanf("%d",&a);

    printf("Enter 'b' number: ");
    scanf("%d",&b);

    sum = a+b;
    // sub = a-b;
    // mul = a*b;
    // div = a/b;
    // mod = a%b;

    printf("Addition of 2 numbers is: %d",sum);
    /*
    printf("Subtraction of 2 numbers is :%d",sub);
    printf("Multiplication of 2 numbers is :%d",mul);
    printf("Division of 2 numbers is :%d",div);
    printf("Modules of 2 numbers is :%d",mod);
    */
    return 0;
}