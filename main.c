#include "dynamic_array.h"


int main(){
    int arr_1_size;
    printf("Enter array_1 size: ");
    scanf("%d", &arr_1_size);

    int arr_2_size;
    printf("Enter array_2 size: ");
    scanf("%d", &arr_2_size);
    
    arr *arr_1 = create_array(arr_1_size);
    arr *arr_2 = create_array(arr_1_size);

    
    append(10, arr_1);
    append(20, arr_1);
    append(30, arr_1);


    append(2, arr_2);
    append(4, arr_2);
    append(6, arr_2);
    append(8, arr_2);
    append(10, arr_2);
    append(12, arr_2);

    print_arr(arr_1);
    free_array(arr_1);

    print_arr(arr_2);
    free_array(arr_2);
    return 0;
}