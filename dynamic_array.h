#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"

typedef struct d_arr arr;

arr* create_arr();
void free_arr(arr* d_array);
void print_arr(arr* d_array);
void append_arr(arr* d_array, int element);
int pop_arr(arr* d_array);
int get_arr(arr* d_array, int index);
void sort_arr(arr* d_array);
int len_arr(arr *d_array);