#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char chr[] = {"hello"};
    char *ptr = chr; 

    printf("%s", ptr++);

    return 0;
}
