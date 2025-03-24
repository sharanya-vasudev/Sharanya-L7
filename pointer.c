#include <stdio.h>

int main() {
    
    int array[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int **dptr;
    ptr = array;
    dptr = &ptr;
    printf("Address stored in ptr: %p\n", (void*)ptr);
    printf("Address stored in dptr: %p\n", (void*)dptr);
    for (int i = 0; i < 5; i++) {
        printf("Address of array[%d]: %p\n", i, (void*)(ptr + i));
    }

    return 0;
}
