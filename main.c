#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *entry_point(void *value) {
    printf("hello from the second thread");
    return NULL; 
}


int main(int argc, char const *argv[])
{
    pthread_t thread;

    printf("hello from the first thread"); 

    int num = 23;

    pthread_create(&thread, NULL, entry_point, &num);
    
    pthread_join(thread, NULL);

    return EXIT_SUCCESS;
}
