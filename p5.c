// call by value program

#include<stdio.h>

void square(int n);

int main()
{
    int number = 4;
    square(number);
    printf("number is = %d\n",number);
}

void square(int n)
{
    n = n * n;
    printf("Squared number is = %d\n",n);
}