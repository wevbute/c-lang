#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    char *name;
} person;

int main(int argc, char const *argv[])
{
    // declare a new struct
    person keki;

    // set some data
    keki.age = 16;
    keki.name = malloc(6 * sizeof(char));
    strcpy(keki.name, "keki");

    // create a pointer to struct
    person *keki_ptr = &keki;

    // set some data, again
    (*keki_ptr).age = 14;
    (*keki_ptr).name = realloc((*keki_ptr).name, 7 * sizeof(char));
    strcpy((*keki_ptr).name, "keki!");

    // set some data again but with better syntax
    keki_ptr->age = 16;
    keki_ptr->name = realloc(keki_ptr->name, 8 * sizeof(char));
    strcpy(keki_ptr->name, "keki!!"); 
    
    return 0;
}
