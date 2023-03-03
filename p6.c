// call by refernce

#include<stdio.h>

void square(int n);
void _square(int *n);

int main()
{
    int number = 4;
    square(number);
    printf("number is: %d\n",number);

    _square(&number);
    printf("number is: %d\n", number);
}

void square(int n)
{
    n = n * n;
    printf("Square number is: %d\n", n);
}

void _square(int*n)
{
    *n = (*n) * (*n);
    printf("Square number is: %d\n",*n);
}