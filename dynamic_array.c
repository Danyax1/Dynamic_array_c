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

void resize_arr(arr* d_array){
    int size_arr = d_array -> size_d_arr;
    int elmnt_in_arr = d_array -> elements_in_arr;
    if(size_arr == elmnt_in_arr){
        d_array -> size_d_arr *= 2;
        int *new_data = realloc(d_array -> data, size_arr * 2 * sizeof(int) + 1);
        if (new_data == NULL){
            printf("Resizing failed");
            exit(1);
        }
        
        d_array->data = new_data;
    }
}

void append (int element, arr* d_array){
    int size_arr = d_array -> size_d_arr;
    int elmnt_in_arr = d_array -> elements_in_arr;
    if(size_arr == elmnt_in_arr){
        resize_arr(d_array);
    }
    d_array->data[elmnt_in_arr] = element;
    (d_array -> elements_in_arr)++;
}