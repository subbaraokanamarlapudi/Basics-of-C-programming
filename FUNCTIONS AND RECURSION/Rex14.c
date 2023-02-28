// calculating the percentage of science,Maths,sanskrit.

#include<stdio.h>

int CalculatePercentage(int science, int maths , int sanskrit);

int main()
{
    int science = 98;
    int maths = 95;
    int sanskrit = 99;

    printf("Total percentage is :%d",CalculatePercentage(science,maths,sanskrit));
}

int CalculatePercentage(int science, int maths , int sanskrit)
{
    return((science + maths + sanskrit) / 3);
}