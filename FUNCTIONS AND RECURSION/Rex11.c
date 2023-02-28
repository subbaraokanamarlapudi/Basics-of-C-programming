#include<stdio.h>

int Fact(int n);

int main()
{
    printf("Factorial is : %d",Fact(5));

}

int Fact(int n)
{
    if(n == 0)
    {
        return 1;
    }

    int Fact1 = Fact(n-1);
    int Fact2 = Fact1 * n;
    return Fact2;
}