#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr_array = &array;

    for (int i = 0; i < 5; i++){
        printf("%p\n ", &ptr_array[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++){
        printf("%p\n", (ptr_array+i));
    }
    printf("\n");
    return 0;
}
