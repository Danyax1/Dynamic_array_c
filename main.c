#include "dynamic_array.h"


int main(){
    int arr_1_size;
    printf("Enter array_1 size: ");
    scanf("%d", &arr_1_size);

    int arr_2_size;
    printf("Enter array_2 size: ");
    scanf("%d", &arr_2_size);
    
    arr *arr_1 = create_arr(arr_1_size);
    arr *arr_2 = create_arr(arr_2_size);

    
    append_arr(10, arr_1);
    append_arr(20, arr_1);
    append_arr(30, arr_1);


    append_arr(2, arr_2);
    append_arr(4, arr_2);
    append_arr(6, arr_2);
    append_arr(8, arr_2);
    append_arr(10, arr_2);
    append_arr(12, arr_2);

    print_arr(arr_1);
    print_arr(arr_2);

    int last_of_arr_1 = pop_arr(arr_1);
    printf("Last element of array 1: %d\n", last_of_arr_1);
    print_arr(arr_1);

    last_of_arr_1 = pop_arr(arr_1);
    printf("Last element of array 1: %d\n", last_of_arr_1);
    print_arr(arr_1);

    last_of_arr_1 = pop_arr(arr_1);
    printf("Last element of array 1: %d\n", last_of_arr_1);
    print_arr(arr_1);


    free_arr(arr_1);
    free_arr(arr_2);
    return 0;
}