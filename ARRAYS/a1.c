#include<stdio.h>

int main()
{
    int marks[3];

    printf("Enter PHYSICS marks: ");
    scanf("%d",&marks[0]);

    printf("Enter CHEMISTRY marks: ");
    scanf("%d",&marks[1]);

    printf("Enter MATHS marks: ");
    scanf("%d",&marks[2]);

    printf("PHYSICS = %d , CHEMISTRY = %d , MATHS = %d\n", marks[0] , marks[1] , marks[2]);
}