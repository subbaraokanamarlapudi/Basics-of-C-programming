// Array in a pointer

#include<stdio.h>

int main()
{
    int aadhar[5];
    int *ptr = &aadhar[0];

    for(int i = 0; i<5; i++)
    {
        printf("%d index: ",i);
        scanf("%d",&aadhar[i]);
    }

    for(int i = 0; i<5; i++)
    {
        printf("%d index = %d\n",i,aadhar[i]);
    }
}