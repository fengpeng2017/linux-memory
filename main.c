#include <stdio.h>
#include <stdlib.h>

void stackmemory()
{
    int *myptr;
    int myvar;
    long myvar_long, *myptr_long;
    static int myvar_static;

    myvar = 1000;
    myptr = (void *) &myvar;

    /* set, use, allocate or something.. Then */
    printf("Myvar(int) at:  %d, \t\t myptr at: 0x%p\n", myvar, (void*)myptr);

    myvar_long = 1000000;
    myptr = (void *) &myvar_long;

    /* set, use, allocate or something.. Then */
    printf("Myvar(long) at: %ld, \t myptr at: 0x%p\n", myvar_long, (void*)myptr);

    myvar_static = 9999;
    myptr = &myvar_static;

    /* set, use, allocate or something.. Then */
    printf("Myvar(static) at: %d, \t myptr at: 0x%p\n", myvar_static, (void*)myptr);
}

void dynamicmemory()
{
    void *myptr;

        myptr = malloc(1024);
    /* set, use, allocate or something.. Then */
    if (myptr)
        printf("Allocated 1024 at myptr at:\t %p\n", myptr);
    else
        printf("failed to allocate");
    myptr=realloc(myptr, 100000);
    if (myptr)
        printf("Allocated 100000 at myptr at:\t %p\n", myptr);
    else
        printf("failed to reallocate");

    free(myptr);
}

int main(int argc, char *argv[])
{
    printf("Calling function stackmemory!\n");
    stackmemory();
    printf("Calling function dynamicmemory!\n");
    dynamicmemory();
    return 0;
}


