#include<stdio.h>

void namaste();
void bonjour();

int main()
{
    char ch;
    printf("Enter 'F' for french\nEnter 'I' for Indian\n");
    scanf("%c",&ch);

    if(ch == 'F')
    {
        printf("Bonjour");
    }
    else
    {
        printf("Namaste");
    }
}

void namaste()
{
    printf("Namaste\n");
}

void bonjour()
{
    printf("Bonjour\n");
}