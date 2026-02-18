/**
 * HW1: C Basics - Function Implementations
 * 
 * Complete all TODO sections below.
 * Do not modify the function signatures.
 */

#include <stdio.h>
#include "functions.h"

/* ============================================================
 * Problem 1: Simple Calculator
 * ============================================================ */

double calculate_sum(double a, double b) {
    // TODO: Return the sum of a and b
    return a + b;  // Replace this
}

double calculate_difference(double a, double b) {
    // TODO: Return a minus b
    return a - b;  // Replace this
}

double calculate_product(double a, double b) {
    // TODO: Return the product of a and b
    return a * b;  // Replace this
}

int calculate_quotient(double a, double b, double *result) {
    // TODO: Calculate a divided by b
    // Store result in *result
    // Return 0 on success, -1 if b is zero

	// Return -1 if b is zero or result is a null pointer
	if (result == NULL) {
		return -1;
	}

	if (b == 0.0) {
		return -1;
	}

	*result = a / b;

    return 0;   // Replace this
}


/* ============================================================
 * Problem 2: Grade Converter
 * ============================================================ */

int is_valid_grade(int grade) {
    // TODO: Return 1 if grade is between 0 and 100 (inclusive)
    // Return 0 otherwise

	if (grade >= 0 && grade <= 100) {
		return 1;
	}

    return 0;
}

char get_letter_grade(int numeric_grade) {
    // TODO: Convert numeric grade to letter grade
    // 90-100: 'A'
    // 80-89:  'B'
    // 70-79:  'C'
    // 60-69:  'D'
    // 0-59:   'F'
    // Invalid: 'X'
	if (!is_valid_grade(numeric_grade)) {
		return 'X';
	}

	if (numeric_grade >= 90) {
		return 'A';
	} else if (numeric_grade >= 80) {
		return 'B';
	} else if (numeric_grade >= 70) {
		return 'C';
	} else if (numeric_grade >= 60) {
		return 'D';
	} else {
		return 'F';
	}
}

const char* get_grade_message(char letter_grade) {
    // TODO: Return an appropriate message for each grade
    // 'A': "Excellent work!"
    // 'B': "Good work!"
    // 'C': "Satisfactory."
    // 'D': "Needs improvement."
    // 'F': "Please see instructor for help."
    // Other: "Invalid grade."

	switch (letter_grade) {
		case 'A':
			return "Excellent work!";
		case 'B':
			return "Good work!";
		case 'C':
			return "Satisfactory.";
		case 'D':
			return "Needs improvement.";
		case 'F':
			return "Please see instructor for help.";
		default:
			return "Invalid grade.";
	}

}


/* ============================================================
 * Problem 3: Pattern Printer
 * ============================================================ */

void print_right_triangle(int size) {
    // TODO: Print a right triangle pattern
    // Example for size=5:
    // *
    // **
    // ***
    // ****
    // *****

	for (int r = 1; r <= size; r++) {
		for (int c = 1; c <= r; c++) {
			printf("*");
		}
		printf("\n");
	}

    // Use nested for loops
    // Outer loop: rows (1 to size)
    // Inner loop: stars (1 to current row number)
}

void print_inverted_triangle(int size) {
    // TODO: Print an inverted triangle pattern
    // Example for size=5:
    // *****
    // ****
    // ***
    // **
    // *

	for (int r = size; r >= 1; r--) {
		for (int c = 1; c <= r; c++) {
			printf("*");
		}
		printf("\n");
	}
    // Use nested for loops
}

void print_diamond(int size) {
    // TODO: Print a diamond pattern
    // Example for size=5:
    //     *        (4 spaces, 1 star)
    //    ***       (3 spaces, 3 stars)
    //   *****      (2 spaces, 5 stars)
    //  *******     (1 space, 7 stars)
    // *********    (0 spaces, 9 stars)
    //  *******     (1 space, 7 stars)
    //   *****      (2 spaces, 5 stars)
    //    ***       (3 spaces, 3 stars)
    //     *        (4 spaces, 1 star)

	// Top Half 
	for (int i = 0; i < size; i++) {
		int spaces = size - i - 1;
		int stars = 2 * i + 1;

		for (int sp = 0; sp < spaces; sp++) {
			printf(" ");
		}
		for (int str = 0; str < stars; str++) {
			printf("*");
		}

		printf("\n");
	}

	// Bottom Half
	for (int i = size-2; i >= 0; i--) {
                int spaces = size - i - 1;
                int stars = 2 * i + 1;

                for (int sp = 0; sp < spaces; sp++) {
                        printf(" ");
                }
                for (int str = 0; str < stars; str++) {
                        printf("*");
                }

                printf("\n");
        }
    // Hint: Top half has size rows, bottom half has size-1 rows
    // Hint: Row i has (size-i-1) spaces and (2*i+1) stars
}


/* ============================================================
 * Problem 4: Number Analyzer
 * ============================================================ */

int count_digits(int n) {
    // TODO: Count the number of digits in n
    // Return -1 if n <= 0
    // 
    // Hint: Use a while loop
    // Keep dividing by 10 until n becomes 0

	if (n <= 0) {
		return -1;
	}

	int count = 0;

	while (n > 0) {
		n = n / 10;
		count++;
	}

    	return count;
}

int sum_digits(int n) {
    // TODO: Calculate the sum of all digits in n
    // Return -1 if n <= 0
    //
    // Hint: Use n % 10 to get the last digit
    // Use n / 10 to remove the last digit

	if (n <= 0) {
                return -1;
        }

	int sum = 0;

	while (n > 0) {
		sum += (n % 10);
		n = n / 10;
	}

    	return sum;
}

int is_even(int n) {
    // TODO: Return 1 if n is even, 0 if odd
    // Hint: Use the modulo operator %
	if (n % 2  == 0) {
		return 1;
	} else {
		return 0;
	}
}

int reverse_number(int n) {
    // TODO: Reverse the digits of n
    // Return -1 if n <= 0
    // Example: 12345 -> 54321
    //
    // Hint: Build the reversed number digit by digit
    // reversed = reversed * 10 + (n % 10)

	if (n <= 0) {
		return -1;
	}

	int reversed = 0;

	while (n > 0) {
		reversed = reversed * 10 + (n % 10);
		n = n / 10;
	}

    	return reversed;
}
