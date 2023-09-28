#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

#define BUFF_SIZE 1024
#define BITS_IN_LONG (sizeof(unsigned long int) * 8)

int _putchar(char c);
int _strlen(const char *s);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int my_pow(int base, int exponent);
int get_endianness(void);

#endif
