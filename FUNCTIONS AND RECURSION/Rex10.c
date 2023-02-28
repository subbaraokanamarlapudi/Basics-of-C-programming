#include<stdio.h>

int Sum(int n);

int main()
{
    printf("Sum is : %d",Sum(5));
}

int Sum(int n)
{
    if(n == 1)
    {
        return 1;
    }

    int SumNm1 = Sum(n-1);   // sum of 1 to n
    int SumN = SumNm1 + n;
    return SumN;     
}