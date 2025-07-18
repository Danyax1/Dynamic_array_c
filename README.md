# **Dynamic Array Implementation in C**

## Overview

Unlike static arrays in C, dynamic arrays can grow and shrink at runtime. This implementation aims to be **simple** and **Python-like**, mimicking the behavior of Python’s `list` while staying lightweight and C-friendly.

## ✅ Features

This dynamic array supports:

- Pretty-printing the array
- Appending elements
- Popping elements from the end
- Accessing elements by index
- Sorting the array
- Getting the current length
- Inserting an element at a specific position

##  Usage

### 1. Add files to your project

Copy `dynamic_array.c` and `dynamic_array.h` into your project directory.

### 2. Include the header
```
 #include "dynamic_array.h"
```
### 3. Create an array
```
arr *my_array = create_arr(INITIAL_CAPACITY);
```
### 4. Use the array
Call the available functions to manipulate or access the array as needed.

### 5. Free the memory
```
 free_arr(my_array);
```
Don’t forget to free the array when you’re done to avoid memory leaks

