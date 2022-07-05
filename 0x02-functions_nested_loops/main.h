#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - print the character c to the std output
 * @C: parameter to compare
 * REturn: 1 or 0
 * */
int _putchar(char c);
/**
 * print_alphabet - function to print alphabet
 *
 * */
void print_alphabet(void);
/**
 * print the alphabet with data type and argument void
 * */
void print_alphabet_x10(void);
/**
 * print the alphabet 10x to the std output
 * */
int _islower(int c);
/**
 * check whether a character is lowercase
 * return 1 if c
 * return 0 otherwise
 * */
int _isalpha(int c);
/**
 * checks the alphabet 
 * return 1 if c is lower,lowercase or uppercase
 * return 0 otherwise
 * */
int print_sign(int n);
/**
 * prints the sign of a number
 * Return 1 and prints + if n is greater than zero
 * return 0 and prints 0 if n is zero
 * returns -1 and prints - if n is less than zero
 * */
int _abs(int);
/**
 * prints the absolute value an integer
 * */
int print_last_digit(int);
/**
 * print the last digit of a number and return its value
 * */
void jack_bauer(void);
/**
 * prints every minute of the day
 * */
void times_table(void);
/**
 * prints the 9 time table
 * */
int add(int, int);
/**
 * a functions that print the sum of two numbers and return the result
 * */
void print_to_98(int n);
/**
 * a functions that prints all natural numbers
 * */
void print_times_table(int n);
/**
 * a function that print the n time table and starting at 0
 * */
#endif
