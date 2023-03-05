// Swapping  of 2 numbers

#include <stdio.h>

void swap(int*,int*);
int main()
{
    int x,y;
    printf("enter the value of x\n");
    scanf("%d",&x);

    printf("enter the value of y\n");
    scanf("%d",&y);

    printf("Before swapping\nx = %d\ny = %d\n",x,y);
    swap(&x,&y);
    printf("After swapping\nx =%d\ny=%d\n",x,y);
    return 0;
}
void swap(int*a,int*b)
{
    int temp;
    temp= *b;
    *b=*a;
    *a=temp;
}