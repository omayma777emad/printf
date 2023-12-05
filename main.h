#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define CONT_SIZE 1024

/**
 * struct data - Struct op
 *
 * @data: The format.
 * @f: The function associated.
 */

struct data
{
	char data;

	int (*f)(va_list, char[], int);
};
/**
 * typedef struct data da_ta - Struct op
 *
 * @data: The format.
 * @da_ta: The function associated.
 */
typedef struct data da_ta;

/* functions Prototypes */

/**int _putchar(char c);*/
int _printf(const char *format, ...);
int handle_content(const char *data, int index, va_list args, char content[]);
int handle_write_char(char c, char content);
int print_char(va_list args, char content[]);
int print_string(va_list args, char content[]);
int print_percent(va_list args, char content[]);
/**void print_int(va_list args, int content[]);*/

#endif
