#include "dynamic_array.h"

typedef struct dynamic_array {
    int *data;
    int size;
    int count;
} arr;

arr* create_arr(int initial_size) {
    arr* d_array = malloc(sizeof(arr));
    if (d_array == NULL) {
        printf("Initialization failed\n");
        return NULL;
    }
    d_array->data = malloc(initial_size * sizeof(int));
    
    if (d_array->data == NULL) {
        printf("Data allocation failed\n");
        free(d_array);
        return NULL;
    }

    d_array->size = initial_size;
    d_array->count = 0;

    return d_array;
}

void free_arr(arr* d_array) {
    if (d_array != NULL) {
        free(d_array->data);
        free(d_array);
    }  
}

void print_arr(arr* d_array){
    printf("[");
    for(int i = 0; i < d_array->count; i++){
        printf(" %d ", d_array->data[i]);
    }
    printf("]\n");
}

void resize_arr(arr* d_array){
    int size_arr = d_array -> size;
    int elmnt_in_arr = d_array -> count;
    if(size_arr == elmnt_in_arr){
        (size_arr) ? size_arr *= 2 : size_arr ++;
        d_array -> size = size_arr;
        int *new_data = realloc(d_array -> data, size_arr * sizeof(int));
        if (new_data == NULL){
            printf("Resizing failed");
            exit(1);
        }
        d_array->data = new_data;

    } else{
        int new_size = d_array->size / 2;
        int *new_data = realloc(d_array->data, new_size * sizeof(int));
        if (new_data == NULL) {
            printf("Resizing failed\n");
            exit(1);
        }
        d_array->data = new_data;
        d_array->size = new_size;
    }
}

void append_arr(arr* d_array, int element){
    int size_arr = d_array -> size;
    int elmnt_in_arr = d_array -> count;
    if(size_arr == elmnt_in_arr){
        resize_arr(d_array);
    }
    d_array->data[elmnt_in_arr] = element;
    (d_array -> count)++;
}

int pop_arr(arr* d_array){
    if (d_array->count == 0){
        printf("Array is empty. Pop failed\n");
        exit(1);
    }
    int last_el_index = d_array->count - 1;
    int last_element = d_array->data[last_el_index];
    d_array->count--;

    if (d_array->count > 0 && d_array->count < d_array->size / 4 && d_array->size > 1) {
        resize_arr(d_array);
    }

    return last_element;
}

int get_arr(arr* d_array, int index){
    if (index < 0 || index >= d_array->count){
        printf("Accessing elements out of range.");
        exit(1);
    }
    int element = d_array->data[index];
    return element;
}

int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
void sort_arr(arr* d_array){
    // if array is bigger that 10 elements -- quicksort
    //                           otherwise -- insertion sort
    if(d_array->count > 10){
        qsort(d_array->data, d_array->count, sizeof(int), comp);
    } else if(d_array->count){
        //insertion sort
        int *arr = d_array -> data;
        int N = d_array -> count;

        for (int i = 1; i < N; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }else{
        return;
    }
}
int len_arr(arr *d_array){
    return d_array->count;
}

void insert_arr(arr *d_array, int index, int element){
    if(index < 0 || index > d_array->count){
        printf("Inserting out of range");
        exit(1);
    }

    /*
    1) append element in the array (account resizing if needed)
    2) copy the array part past insert index to temp without last element
    3) put the element in array
    4) put temp in array

    Inserting f at the index 2
    {a, b, c, d, e}                       -> 
    {a, b, c, d, e, f}                    -> 
    {a, b, _, _, _, _} (temp = {c, d, e}) ->
    {a, b, f, _, _, _} (temp = {c, d, e}) ->
    {a, b, f, c, d, e}
    */
    
    append_arr(d_array, element);
    
    int nums_copy_temp = d_array->count - index - 1;

    int *temp = malloc(nums_copy_temp * sizeof(int));
    if (!temp) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    memcpy(temp, &(d_array->data[index]), nums_copy_temp * sizeof(int));


    d_array->data[index] = element;

    memcpy(&(d_array->data[index + 1]), temp, nums_copy_temp * sizeof(int));

    free(temp);

}