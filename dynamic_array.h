#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"

typedef struct d_arr {
    int *data;
    int size_d_arr;
    int elements_in_arr;
} arr;

arr* create_array();
void free_array(arr* d_array);
void print_arr(arr* d_array);