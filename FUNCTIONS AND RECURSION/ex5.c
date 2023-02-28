#include<stdio.h>

int sum(int a , int b);
void PrintTable(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    PrintTable(n);
}

int sum(int a , int b)
{
    return(a+b);
}

void PrintTable(int n)
{
    for(int i=1; i<=10; i++)
    {
        printf("%d\n",i*n);
    }
}