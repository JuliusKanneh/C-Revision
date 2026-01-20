#include <stdio.h>
#include "functions.h"
#include <stdarg.h>

void func_variable_list_args(int n_args, ...){
    printf("Function with variable list arguments called...\n");
    // Implementation would go here
    printf("Number of arguments: %d\n", n_args);
    va_list args;
    va_start(args, n_args);
    for (int i = 0; i < n_args; i++)
    {
        int number_entered = va_arg(args, int);
        printf("First argument as integer: %d\n", number_entered);
    }
    
    va_end(args);
}

int main() {
    // TODO: Uncomment to test Cmake setup
    // hello();
    // printf("CMake is working!\n");

    //TODO: Uncomment to test integer and string input
    // Test integer input through scanf
    // int a; 
    // printf("Please input an integer value: ");
    // scanf("%d", &a);
    // printf("You entered: %d\n", a);

    // Test string input through fgets
    /* char name[40];
    printf("Please input your name: ");
    fgets(name, sizeof(name), stdin);
    printf("You entered: %s", name); 
    */

    /* 
    The example above could also be accomplished with scanf("%39s", name). However, this is discouraged because:
    - You can't use sizeof; the size must be literal.
    - Due to how strings work, the size here is different from the size above—39 versus 40. This difference is easy to 
    forget, and getting it wrong can lead to subtle buffer overflow errors that can be difficult to reproduce.
    */

    // operators_demo();

    // arrays_and_strings_demo();

    // func_variable_list_args(3, 8, 2, 8);

    linked_list_demo();
    
    return 0;

}