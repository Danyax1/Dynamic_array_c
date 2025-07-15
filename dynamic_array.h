#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"

typedef struct d_arr arr;
arr* create_array();
void free_array(arr* d_array);