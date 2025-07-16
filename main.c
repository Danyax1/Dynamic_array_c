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
    append_arr(14, arr_2);
    append_arr(12, arr_2);

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


    int arr_3_size = 20;
    printf("Array_3 size: %d\n", arr_3_size);
    arr *arr_3 = create_arr(arr_3_size);

    for (int i = 0; i < 20; i++){
        append_arr((100 % (i+1) - i / 3), arr_3);
    }
    print_arr(arr_3);
    sort_arr(arr_3);
    printf("Sorted array 3:     ");
    print_arr(arr_3);

    sort_arr(arr_2);
    printf("Sorted array 2:     ");
    print_arr(arr_2);




    free_arr(arr_1);
    free_arr(arr_2);
    free_arr(arr_3);
    return 0;
}