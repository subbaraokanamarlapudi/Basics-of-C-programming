#include<stdio.h>

void PrintAddress(int n);

int main()
{
    int n = 4;

    printf("%p\n",&n);
    PrintAddress(n);
}

void PrintAddress(int n)
{
    printf("%p\n",&n);
}