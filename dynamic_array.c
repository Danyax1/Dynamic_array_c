#include "dynamic_array.h"

typedef struct d_arr {
    int *data;
    int size_d_arr;
    int elements_in_arr;
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

    d_array->size_d_arr = initial_size;
    d_array->elements_in_arr = 0;

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
    for(int i = 0; i < d_array->elements_in_arr; i++){
        printf(" %d ", d_array->data[i]);
    }
    printf("]\n");
}

void resize_arr(arr* d_array){
    int size_arr = d_array -> size_d_arr;
    int elmnt_in_arr = d_array -> elements_in_arr;
    if(size_arr == elmnt_in_arr){
        (size_arr) ? size_arr*=2 : size_arr ++;
        d_array -> size_d_arr = size_arr;
        int *new_data = realloc(d_array -> data, size_arr * sizeof(int));
        if (new_data == NULL){
            printf("Resizing failed");
            exit(1);
        }
        
        d_array->data = new_data;
    }
}

void append_arr(arr* d_array, int element){
    int size_arr = d_array -> size_d_arr;
    int elmnt_in_arr = d_array -> elements_in_arr;
    if(size_arr == elmnt_in_arr){
        resize_arr(d_array);
    }
    d_array->data[elmnt_in_arr] = element;
    (d_array -> elements_in_arr)++;
}

int pop_arr(arr* d_array){
    int last_el_index = --(d_array->elements_in_arr);
    if (last_el_index < 0){
        printf("Array is empty. Pop failed");
        exit(1);
    }
    int last_element = d_array->data[last_el_index];
    d_array->elements_in_arr = last_el_index;
    return last_element;
}

int get_arr(arr* d_array, int index){
    if (index < 0 || index >= d_array->elements_in_arr){
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
    if(d_array->elements_in_arr > 10){
        qsort(d_array->data, d_array->elements_in_arr, sizeof(int), comp);
    } else if(d_array->elements_in_arr){
        //insertion sort
        int *arr = d_array -> data;
        int N = d_array -> elements_in_arr;

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
    return d_array->elements_in_arr;
}