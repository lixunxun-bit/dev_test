

#include <stdio.h>

// 这是你写的代码
int sum()
{
    return 0;
}

// 这是我写的
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("&asdffadsafsd");
    printf("hello");
}

int arr_sum(int* arr, int len)
{
    return 0;
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

