#include<stdio.h>

int main()
{
    // Area of circle is = pi*r*r

    float area,radius;

    printf("Enter the radius: ");
    scanf("%f",&radius);

    area = 3.14*radius*radius;

    printf("Area of circle is: %f",area);   
}