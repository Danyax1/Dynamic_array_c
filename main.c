#include "dynamic_array.h"


int main(){
    
    arr *arr_1 = create_array();

    free_array(arr_1);
    return 0;
}