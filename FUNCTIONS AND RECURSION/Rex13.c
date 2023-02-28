#include<stdio.h>

float ConvertTemp(float celsius);

int main()
{
    float farhenhit = ConvertTemp(100);
    printf("Farhenhit is :%f",farhenhit);
}

float ConvertTemp(float celsius)
{
    float farhenhit = celsius * (9.0/5.0) + 32;
    return farhenhit;
}