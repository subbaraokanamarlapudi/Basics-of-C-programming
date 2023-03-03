#include<stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;

    // addressing of value.
    // printf("%p\n",&age);
    // printf("%u\n",&age);
    // printf("%u\n",ptr);
    // printf("%u\n",&ptr);

    // addressing to the value
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
}
