/**
 * HW1: C Basics - Function Prototypes
 * DO NOT MODIFY THIS FILE
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

/* Problem 1: Simple Calculator */

/**
 * Calculates the sum of two numbers
 * @param a First number
 * @param b Second number
 * @return Sum of a and b
 */
double calculate_sum(double a, double b);

/**
 * Calculates the difference of two numbers
 * @param a First number
 * @param b Second number
 * @return a minus b
 */
double calculate_difference(double a, double b);

/**
 * Calculates the product of two numbers
 * @param a First number
 * @param b Second number
 * @return Product of a and b
 */
double calculate_product(double a, double b);

/**
 * Calculates the quotient of two numbers
 * @param a Dividend
 * @param b Divisor
 * @param result Pointer to store the quotient
 * @return 0 on success, -1 if division by zero
 */
int calculate_quotient(double a, double b, double *result);


/* Problem 2: Grade Converter */

/**
 * Converts a numeric grade to a letter grade
 * @param numeric_grade Grade from 0-100
 * @return Letter grade character ('A', 'B', 'C', 'D', 'F') or 'X' for invalid
 */
char get_letter_grade(int numeric_grade);

/**
 * Gets the message for a letter grade
 * @param letter_grade The letter grade ('A'-'F')
 * @return Pointer to message string
 */
const char* get_grade_message(char letter_grade);

/**
 * Validates if a grade is in valid range
 * @param grade The numeric grade
 * @return 1 if valid (0-100), 0 if invalid
 */
int is_valid_grade(int grade);


/* Problem 3: Pattern Printer */

/**
 * Prints a right triangle pattern of given size
 * @param size Number of rows (1-10)
 */
void print_right_triangle(int size);

/**
 * Prints an inverted triangle pattern of given size
 * @param size Number of rows (1-10)
 */
void print_inverted_triangle(int size);

/**
 * Prints a diamond pattern of given size
 * @param size Number of rows for top half (1-10)
 */
void print_diamond(int size);


/* Problem 4: Number Analyzer */

/**
 * Counts the number of digits in a positive integer
 * @param n The positive integer
 * @return Number of digits, or -1 if n <= 0
 */
int count_digits(int n);

/**
 * Calculates the sum of digits in a positive integer
 * @param n The positive integer
 * @return Sum of digits, or -1 if n <= 0
 */
int sum_digits(int n);

/**
 * Checks if a number is even
 * @param n The integer
 * @return 1 if even, 0 if odd
 */
int is_even(int n);

/**
 * Reverses a positive integer
 * @param n The positive integer
 * @return Reversed number, or -1 if n <= 0
 */
int reverse_number(int n);

#endif /* FUNCTIONS_H */

