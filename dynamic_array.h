#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"

typedef struct d_arr arr;

arr* create_arr();
void free_arr(arr* d_array);
void print_arr(arr* d_array);
void append_arr (int element, arr* d_array);
int pop_arr(arr* d_array);