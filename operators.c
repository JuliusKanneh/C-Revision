#include "functions.c"

void unary_expressions() {
    int a = 5;
    int b = -a; // Unary minus
    int c = +a; // Unary plus

    int is_positive = (a > 0); // Relational operator
    int is_negative = (a < 0); // Relational operator

    int logical_not = !is_positive; // Logical NOT

    int bitwise_not = ~a; // Bitwise NOT/Complement

    printf("Unary Operators:\n");
    draw_line(40, '-');
    printf("Original a: %d\n", a);
    printf("Unary minus (-a): %d\n", b);
    printf("Unary plus (+a): %d\n", c);
    printf("Is a positive? (a > 0): %d\n", is_positive);
    printf("Is a negative? (a < 0): %d\n", is_negative);
    printf("Logical NOT (!is_positive): %d\n", logical_not);
    printf("Bitwise NOT (~a): %d\n", bitwise_not);

}

void cast_operators(){
    int a = 10;
    float b = (float)a; // Cast int to float

    double c = 5.67;
    int d = (int)c; // Cast double to int

    printf("Cast Operators:\n");
    draw_line(40, '-');
    printf("Original int a: %d\n", a);
    printf("Casted to float: %.2f\n", b);
    printf("Original double c: %.2f\n", c);
    printf("Casted to int: %d\n", d);
}

void multiplicative_and_additive_operators() {
    int a = 10;
    int b = 3;

    int sum = a + b; // Addition
    int difference = a - b; // Subtraction
    int product = a * b; // Multiplication
    int quotient = a / b; // Division
    int remainder = a % b; // Modulus
    int remainder2 = (-5) % 2; // Modulus with negative numerator. The result is -1 in C not 1 mathematically.

    printf("Multiplicative and Additive Operators:\n");
    draw_line(40, '-');
    printf("a: %d, b: %d\n", a, b);
    printf("Sum (a + b): %d\n", sum);
    printf("Difference (a - b): %d\n", difference);
    printf("Product (a * b): %d\n", product);
    printf("Quotient (a / b): %d\n", quotient);
    printf("Remainder (a %% b): %d\n", remainder);
    printf("Remainder (-5 %% 2): %d\n", remainder2);
}

void bit_wise_operators() {
    unsigned int a = 5; // Binary: 0000 0101
    unsigned int b = 3; // Binary: 0000 0011

    unsigned int and_result = a & b; // Bitwise AND (0000 0101 & 0000 0011 = 0000 0001)
    unsigned int or_result = a | b;  // Bitwise OR (0000 0101 | 0000 0011 = 0000 0111)
    unsigned int xor_result = a ^ b; // Bitwise XOR (0000 0101 ^ 0000 0011 = 0000 0110)

    printf("Bitwise Operators:\n");
    draw_line(40, '-');
    printf("a: %u, b: %u\n", a, b);
    printf("Bitwise AND (a & b): %u\n", and_result);
    printf("Bitwise OR (a | b): %u\n", or_result);
    printf("Bitwise XOR (a ^ b): %u\n", xor_result);
}

void shift_operators() {
    unsigned int a = 8; // Binary: 0000 1000

    unsigned int left_shift = a << 2; // Left shift by 2 and add zero(s) (0000 1000 -> 0010 0000)
    unsigned int right_shift = a >> 2; // Right shift by 2 and zero(s) (0000 1000 -> 0000 0010)

    //Rotate operations are not directly supported in C, but can be implemented using shifts and bitwise OR.
    unsigned int rotate_left = (a >> (sizeof(a)*8 - 2)) | (a << 2); // Rotate left by 2
    unsigned int rotate_right = (a << (sizeof(a)*8 - 2)) | (a >> 2); // Rotate right by 2


    printf("Shift Operators:\n");
    draw_line(40, '-');
    printf("Original a: %u\n", a);
    printf("Left Shift (a << 2): %u\n", left_shift);
    printf("Right Shift (a >> 2): %u\n", right_shift);
    printf("Rotate Left by 2: %u\n", rotate_left);
    printf("Rotate Right by 2: %u\n", rotate_right);
}

void logical_operators() {
    int a = 1; // true
    int b = 0; // false

    int and_result = a && b; // Logical AND
    int or_result = a || b;  // Logical OR

    printf("Logical Operators:\n");
    draw_line(40, '-');
    printf("a: %d, b: %d\n", a, b);
    printf("Logical AND (a && b): %d\n", and_result);
    printf("Logical OR (a || b): %d\n", or_result);
}

void conditional_operators() {
    int a = 10;
    int b = 20;

    int max = (a > b) ? a : b; // Ternary operator to find maximum

    printf("Conditional (Ternary) Operator:\n");
    draw_line(40, '-');
    printf("a: %d, b: %d\n", a, b);
    printf("Maximum (using ternary operator): %d\n", max);
}

void assignment_operators() {
    int a = 5;
    int b = 10;

    a += b; // a = a + b
    printf("After a += b, a: %d\n", a);

    a -= b; // a = a - b
    printf("After a -= b, a: %d\n", a);

    a *= 2; // a = a * 2
    printf("After a *= 2, a: %d\n", a);

    a /= 3; // a = a / 3
    printf("After a /= 3, a: %d\n", a);

    a %= 4; // a = a % 4
    printf("After a %%= 4, a: %d\n", a);
}

void comma_operator() {
    int a = 1;
    int b = 2;
    int c;

    c = (a += 5, b += 10, a + b); // Comma operator

    printf("Comma Operator:\n");
    draw_line(40, '-');
    printf("After operations, a: %d, b: %d\n", a, b);
    printf("Result of comma operator expression assigned to c: %d\n", c);
}

void operators_demo() {
    unary_expressions();
    draw_line(50, '*');
    cast_operators();
    draw_line(50, '*');
    multiplicative_and_additive_operators();
    draw_line(50, '*');
    shift_operators();
    draw_line(50, '*');
    bit_wise_operators();
    draw_line(50, '*');
    logical_operators();
    draw_line(50, '*');
    conditional_operators();
    draw_line(50, '*');
    assignment_operators();
}