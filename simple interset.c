#include<stdio.h>

int main()
{
    // Simple interset formula (SI) = P*T*R/100

    int p,t,r,SI;

    printf("Enter a 'P' value: ");
    scanf("%d",&p);

    printf("Enter a 'T' value: ");
    scanf("%d",&t);

    printf("Enter a 'R' value: ");
    scanf("%d",&r);

    SI = p*t*r/100;

    printf("Simple Interset is: %d",SI);
}