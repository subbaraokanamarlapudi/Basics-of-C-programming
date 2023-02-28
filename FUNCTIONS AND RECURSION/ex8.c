#include<stdio.h>
#include<math.h>

float SquareArea(float side);
float RectangleArea(float a , float b);
float CircleArea(float radius);

int main()
{
    float a = 5.0;
    float b = 10.0;
    
    printf("Area of rectangele is : %f\n", RectangleArea(a,b));
}

float SquareArea(float side)
{
    return side * side;
}

float RectangleArea(float a , float b)
{
    return a * b;
}

float CircleArea(float radius)
{
    return M_PI * radius * radius;
}