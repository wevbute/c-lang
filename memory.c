#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int* ptr = (int *)malloc(sizeof(int) * 5); // 4바이트 5칸 할당
    int* ptr2 = (int *)calloc(5, sizeof(int)); // 4바이트 5칸 할당 그리고 메모리의 값 다 0으로 초기화

    if (ptr == NULL || ptr2 == NULL) {
        printf("Cannot allocate memory");
        return 1;
    }

    // *ptr = e; 

    // printf("%d\n", *ptr); 
    printf("%d\n", *ptr2);
    
    free(ptr);
    free(ptr2);
    
    return 0;
}
