#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // L0gin buffer overflow

    int authorized = 0;
    char sys_pass[16] = "secret!";
    char usr_pass[16];

    while (sys_pass != usr_pass) {
        printf("Enter password: ");
        scanf("%s", &usr_pass);

        printf("usr passwd: %s\n", usr_pass);
        printf("sys passwd: %s\n", sys_pass);
        printf("auth val: %d\n", authorized);

        
        printf("usr passwd addr: %p\n", (void *)usr_pass);
        printf("sys passwd addr: %p\n", (void *)sys_pass);
        printf("auth val addr: %p\n", (void *)&authorized);

        if (strcmp(sys_pass , usr_pass) == 0) {
            authorized = 1;
        }

        if (authorized) {
            printf("password is correct!");
        }
    }
    
    return 0;
}
