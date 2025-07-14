#include "dynamic_array.h"


int main(){

    dynamic_arr *arr_1 = create_array();

    free(arr_1);
    return 0;
}