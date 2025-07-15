#include "dynamic_array.h"

typedef struct d_arr {
    int *data;
    size_t size_d_arr;
    size_t elements_in_arr;
} arr;

arr* create_array() {
    arr* d_array = malloc(sizeof(arr));
    if (d_array == NULL) {
        printf("Initialization failed\n");
        return NULL;
    }
    d_array->data = NULL;
    d_array->size_d_arr = 0;
    d_array->elements_in_arr = 0;
    return d_array;
}

void free_array(arr* d_array) {
    if (d_array != NULL) {
        free(d_array->data); 
        free(d_array);
    }
}
