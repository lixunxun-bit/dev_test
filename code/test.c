

#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


int main()
{   
    int a = 1;
    int b = 2;

    swap(&a, &b);
    printf("%d, %d\n", a, b);

    printf("Hello, world!\n");
    return 0;
}

