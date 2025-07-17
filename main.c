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

    int len_arr_1 = len_arr(arr_1);
    printf("Len arr_1 %d\n", len_arr_1);
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

    len_arr_1 = len_arr(arr_1);
    printf("Len arr_1 %d\n", len_arr_1);

    int arr_3_size = 20;
    printf("Array_3 size: %d\n", arr_3_size);
    arr *arr_3 = create_arr(arr_3_size);

    for (int i = 0; i < arr_3_size; i++){
        append_arr(arr_3, (100 % (i+1) - i / 3));
    }
    print_arr(arr_3);
    sort_arr(arr_3);
    printf("Sorted array 3:     ");
    print_arr(arr_3);

    sort_arr(arr_2);
    printf("Sorted array 2:     ");
    print_arr(arr_2);

    insert_arr(arr_1, 0, 1);
    insert_arr(arr_1, 0, 2);
    insert_arr(arr_1, 0, 3);
    insert_arr(arr_1, 1, 1000);
    insert_arr(arr_1, 1, 1000);
    insert_arr(arr_1, 1, 1000);
    insert_arr(arr_1, 4, 4000);
    insert_arr(arr_1, 3, 3000);
    insert_arr(arr_1, 2, 2000);
    pop_arr(arr_1);
    pop_arr(arr_1);

    print_arr(arr_1);



    free_arr(arr_1);
    free_arr(arr_2);
    free_arr(arr_3);
    return 0;
}