#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define CONT_SIZE 1024

/**
 * typedef struct spc spc_f - Struct op
 *
 * @spc: The format.
 * @f: The function associated.
 */
typedef struct spc
{
	char spc;
	int (*f)(va_list, char[]);
} spc_f;


/* functions Prototypes */

/**int _putchar(char c);*/
int _printf(const char *format, ...);
int handle_print(va_list args, int i, char format, char content[]);
int handle_write_char(char content[]);
int print_char(va_list args);
int print_string(va_list args);
int print_percent();
int print_int(va_list args, char content[]);

#endif
