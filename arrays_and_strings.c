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

// ---------------------- Strings ---------------------
/*
 * DEMONSTRATION OF UNDEFINED BEHAVIOR IN C STRINGS
 *
 * This function intentionally shows a common mistake:
 *  - Character arrays without a null terminator ('\0')
 *
 * Why it appears to work:
 *  - printf("%s") prints characters until it finds '\0'
 *  - str1 and str2 are adjacent in memory (stack)
 *  - printing str1 continues into str2
 *
 * Observed output on this system:
 *   String 1: HelloWorld
 *   String 2: World
 *
 * IMPORTANT:
 *  - This behavior is NOT guaranteed by the C standard
 *  - Different compilers, optimizations, or runs may crash or print garbage
 *  - This code is intentionally incorrect for learning purposes
 */
void string_undefined_behavior_demo(){
    /*
     * WRONG: Undefined behavior
     * Arrays are not null-terminated
     */
    char bad1[5] = "Hello";
    char bad2[5] = {'W','o','r','l','d'};

    printf("UB String 1: %s\n", bad1);
    printf("UB String 2: %s\n", bad2);
}

void string_correct_usage(void) {
    /*
     * CORRECT: Properly null-terminated C strings
     */
    char good1[6] = "Hello";
    char good2[6] = "World";

    printf("OK String 1: %s\n", good1);
    printf("OK String 2: %s\n", good2);
}

// ---------------------- Demonstration of Arrays and Strings ---------------------
void arrays_and_strings_demo() {
    // ----- Arrays -----
    /*
    // This function is a placeholder for demonstrating arrays and strings in C.
    // You can implement various operations on arrays and strings here.
    basics();
    draw_line(10, '*');
    access_out_of_bounds();
    draw_line(10, '*');
    // modify_out_of_bounds(); // Very unsafe, uncomment at your own risk
    // draw_line(10, '*');
    multi_dimensional_arrays();
    draw_line(10, '*');

    */

    // ----- Strings -----
    string_undefined_behavior_demo();
    string_correct_usage();
}