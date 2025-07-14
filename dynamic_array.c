#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"

const int START_SIZE = 0;
typedef struct d_arr{
    int *data;
    size_t size_d_arr;
    size_t start_size;
} dynamic_arr;

dynamic_arr* create_array() {
    dynamic_arr* arr = malloc(sizeof(dynamic_arr));
    if (arr = NULL){
        printf("Initialization failed");
        return NULL;
    }
    arr -> data = NULL;
    arr->size_d_arr = 0;
    arr->start_size = START_SIZE;
    return arr;
}