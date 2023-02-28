#include<stdio.h>
#include<math.h>

void PrintSquare(float value);

int main()
{
    float n;
    printf("Enter a number: ");
    scanf("%f",&n);

    printf("Sqaured value is: %f",pow(n,2));
}