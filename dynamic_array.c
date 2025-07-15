#include "dynamic_array.h"



arr* create_array(int initial_size) {
    arr* d_array = malloc(sizeof(arr));
    if (d_array == NULL) {
        printf("Initialization failed\n");
        return NULL;
    }
    d_array->data = malloc(initial_size * sizeof(int));
    
    if (d_array->data == NULL) {
        printf("Data allocation failed\n");
        free(d_array);
        return NULL;
    }

    d_array->size_d_arr = initial_size;
    d_array->elements_in_arr = 0;

    return d_array;
}

void free_array(arr* d_array) {
    if (d_array != NULL) {
        free(d_array->data); 
        free(d_array);
    }
}

void print_arr(arr* d_array){
    printf("Array: [");
    for(int i = 0; i < d_array->elements_in_arr; i++){
        printf(" %d ", d_array->data[i]);
    }
    printf("]\n");
}
