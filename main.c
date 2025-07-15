#include "dynamic_array.h"


int main(){
    int arr_size;
    printf("Enter array size: ");
    scanf("%d", &arr_size);
    
    arr *arr_1 = create_array(arr_size);

    
    arr_1->data[0] = 10;
    arr_1->data[1] = 15;
    arr_1->data[2] = 20;
    arr_1->data[3] = 25;
    arr_1->data[4] = 30;

    arr_1->elements_in_arr = arr_size;
    print_arr(arr_1);
    free_array(arr_1);
    return 0;
}