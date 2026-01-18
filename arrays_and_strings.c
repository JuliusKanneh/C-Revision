#include <stdio.h>
#include "functions.h"

void basics(){
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        arr[i] *= 2; // Example operation: doubling each element
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void access_out_of_bounds(){
    int arr[3] = {10, 20, 30};
    // Accessing out of bounds (undefined behavior)
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // This may print garbage values or cause a crash
    }
    printf("\n");
}

// This is very unsafe and for demonstration purposes only
void modify_out_of_bounds(){
    int arr[3] = {5, 10, 15};
    // Modifying out of bounds (undefined behavior)
    for(int i = 0; i < 5; i++) {
        arr[i] += 1; // This may modify memory outside the array
        printf("%d ", arr[i]); // This may print garbage values or cause a crash
    }
    printf("\n");
}

void multi_dimensional_arrays(){
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void arrays_and_strings_demo() {
    // This function is a placeholder for demonstrating arrays and strings in C.
    // You can implement various operations on arrays and strings here.
    basics();
    draw_line(10, '*');
    access_out_of_bounds();
    draw_line(10, '*');
    // modify_out_of_bounds(); // Very unsafe, uncomment at your own risk
    // draw_line(10, '*');
    multi_dimensional_arrays();
}