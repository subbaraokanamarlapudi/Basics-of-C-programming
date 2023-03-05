//pointers arthematic
 

#include <stdio.h>

//case 1:
// int main()
// {
//     int age = 22;
//     int *ptr = &age;

//     printf("ptr = %u\n",ptr);
//     ptr++;

//     printf("ptr = %u\n",ptr);
//     ptr--;

//     printf("ptr = %u\n",ptr);
// }

//case 2:
// int main()
// {
//     float price = 22.00;
//     float *ptr = &price;

//     printf("ptr = %u\n",ptr);
//     ptr++;

//     printf("ptr = %u\n",ptr);
//     ptr--;

//     printf("ptr = %u\n",ptr);
// }

//case 3
int main()
{
    char star = '*';
    char *ptr = &star;

    printf("ptr = %u\n",ptr);
    ptr++;

    printf("ptr = %u\n",ptr);
    ptr--;

    printf("ptr = %u\n",ptr);
}