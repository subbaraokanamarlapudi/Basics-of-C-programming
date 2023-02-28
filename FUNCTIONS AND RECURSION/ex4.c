#include<stdio.h>

int sum(int a , int b);

int main()
{
    int a , b;
    printf("Enter a First number: ");
    scanf("%d",&a);

    printf("Enter a second number: ");
    scanf("%d",&b);

    int s = sum(a,b);
    printf("sum of a and b : %d",s);
}

int sum(int a , int b)
{
    return(a+b);
}