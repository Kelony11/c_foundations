/**
 * HW1: C Basics - Main Driver Program
 * DO NOT MODIFY THIS FILE
 * 
 * This program tests all four problems in HW1.
 * Run with: ./hw1
 */

#include <stdio.h>
#include "functions.h"

void run_calculator(void);
void run_grade_converter(void);
void run_pattern_printer(void);
void run_number_analyzer(void);

int main(void) {
    int choice;
    
    printf("===========================================\n");
    printf("         HW1: C Basics Test Driver         \n");
    printf("===========================================\n\n");
    
    printf("Select a problem to test:\n");
    printf("1. Simple Calculator\n");
    printf("2. Grade Converter\n");
    printf("3. Pattern Printer\n");
    printf("4. Number Analyzer\n");
    printf("5. Run All\n");
    printf("0. Exit\n");
    printf("\nEnter choice: ");
    
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    
    printf("\n");
    
    switch (choice) {
        case 1:
            run_calculator();
            break;
        case 2:
            run_grade_converter();
            break;
        case 3:
            run_pattern_printer();
            break;
        case 4:
            run_number_analyzer();
            break;
        case 5:
            run_calculator();
            printf("\n-------------------------------------------\n\n");
            run_grade_converter();
            printf("\n-------------------------------------------\n\n");
            run_pattern_printer();
            printf("\n-------------------------------------------\n\n");
            run_number_analyzer();
            break;
        case 0:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}

void run_calculator(void) {
    double a, b;
    double quotient;
    
    printf("===== Problem 1: Simple Calculator =====\n\n");
    
    printf("Enter first number: ");
    if (scanf("%lf", &a) != 1) {
        printf("Invalid input\n");
        return;
    }
    
    printf("Enter second number: ");
    if (scanf("%lf", &b) != 1) {
        printf("Invalid input\n");
        return;
    }
    
    printf("\nResults:\n");
    printf("Sum: %.2f\n", calculate_sum(a, b));
    printf("Difference: %.2f\n", calculate_difference(a, b));
    printf("Product: %.2f\n", calculate_product(a, b));
    
    if (calculate_quotient(a, b, &quotient) == 0) {
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Error: Cannot divide by zero\n");
    }
}

void run_grade_converter(void) {
    int grade;
    char letter;
    
    printf("===== Problem 2: Grade Converter =====\n\n");
    
    printf("Enter numeric grade (0-100): ");
    if (scanf("%d", &grade) != 1) {
        printf("Invalid input\n");
        return;
    }
    
    if (!is_valid_grade(grade)) {
        printf("\nError: Grade must be between 0 and 100\n");
        return;
    }
    
    letter = get_letter_grade(grade);
    printf("\nGrade: %c\n", letter);
    printf("Message: %s\n", get_grade_message(letter));
}

void run_pattern_printer(void) {
    int size;
    
    printf("===== Problem 3: Pattern Printer =====\n\n");
    
    printf("Enter pattern size (1-10): ");
    if (scanf("%d", &size) != 1) {
        printf("Invalid input\n");
        return;
    }
    
    if (size < 1 || size > 10) {
        printf("\nError: Size must be between 1 and 10\n");
        return;
    }
    
    printf("\nPattern A (Right Triangle):\n");
    print_right_triangle(size);
    
    printf("\nPattern B (Inverted Triangle):\n");
    print_inverted_triangle(size);
    
    printf("\nPattern C (Diamond):\n");
    print_diamond(size);
}

void run_number_analyzer(void) {
    int n;
    
    printf("===== Problem 4: Number Analyzer =====\n\n");
    
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return;
    }
    
    if (n <= 0) {
        printf("\nError: Please enter a positive integer\n");
        return;
    }
    
    printf("\nAnalysis:\n");
    printf("Number of digits: %d\n", count_digits(n));
    printf("Sum of digits: %d\n", sum_digits(n));
    printf("Even or Odd: %s\n", is_even(n) ? "Even" : "Odd");
    printf("Reversed: %d\n", reverse_number(n));
}

