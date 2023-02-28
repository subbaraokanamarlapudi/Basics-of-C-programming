#include<stdio.h>

void PrintHello(int count);

int main()
{
    PrintHello(5);
}

void PrintHello(int count)
{
    if(count == 0)
    {
        return;
    }

    printf("Hello world\n");
    PrintHello(count-1);
}