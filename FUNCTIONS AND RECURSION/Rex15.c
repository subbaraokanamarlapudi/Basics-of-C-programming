// Fibonacci series by using the function method

#include<stdio.h>

int Fib(int n);

int main()
{
    printf("%d",Fib(6));
    //Fib(6);  ---> It will print 0 to 6 Fibonacci series.
}

int Fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }

    int fib1 = Fib(n-1);
    int fib2 = Fib(n-2);
    int fibn = fib1 + fib2;
    printf("Fibonacci series of %d is %d\n",n,fibn);
    return fibn;
}