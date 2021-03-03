#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 10;

    swap(&a, &b);

    printf("%d %d", a, b);

    return 0;
}
