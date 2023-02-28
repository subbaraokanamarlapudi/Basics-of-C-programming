#include<stdio.h>

void PrintPrice(float value);

int main()
{
    float value;
    printf("Enter a value: ");
    scanf("%f",&value);

    PrintPrice(value);
    printf("Actual value is: %f\n",value);
}

void PrintPrice(float value)
{
    value = value + (0.18 * value);
    printf("Fianl value is : %f\n",value);
}