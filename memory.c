#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int e = 5;
    int* ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Cannot allocate memory");
        return 1;
    }

    *ptr = e;

    printf("%d\n", *ptr);
    
    free(ptr);
    
    return 0;
}
