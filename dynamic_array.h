#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dynamic_array arr;

arr* create_arr(int size);
void free_arr(arr* d_array);
void print_arr(arr* d_array);
void append_arr(arr* d_array, int element);
int pop_arr(arr* d_array);
int get_arr(arr* d_array, int index);
void sort_arr(arr* d_array);
int len_arr(arr *d_array);
void insert_arr(arr *d_array, int index, int element);