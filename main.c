#include "dynamic_array.h"


int main(){
    size_t arr_size;
    printf("Enter array size: ");
    scanf("%d", &arr_size);
    arr *arr_1 = create_array(arr_size);

    free_array(arr_1);
    return 0;
}