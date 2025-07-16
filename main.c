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

    
    append_arr(arr_1, 10);
    append_arr(arr_1, 20);
    append_arr(arr_1, 30);


    append_arr(arr_2, 2);
    append_arr(arr_2, 4);
    append_arr(arr_2, 6);
    append_arr(arr_2, 8);
    append_arr(arr_2, 0);
    append_arr(arr_2, 2);

    int a = get_arr(arr_1, 2);          // 30
    printf("%d\n", a);

    int b = get_arr(arr_2, 4);          // 10
    printf("%d\n", b);

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