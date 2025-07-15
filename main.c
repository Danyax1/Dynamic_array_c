#include "dynamic_array.h"


int main(){
    int arr_size;
    printf("Enter array size: ");
    scanf("%d", &arr_size);
    
    arr *arr_1 = create_array(arr_size);

    
    append(10, arr_1);
    append(20, arr_1);
    append(50, arr_1);
    
    print_arr(arr_1);
    free_array(arr_1);
    return 0;
}