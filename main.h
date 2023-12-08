#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define CONT_SIZE 1024
#define UNUSED(x) (void)(x)
/**
 * typedef struct spc spc_f - Struct op
 * @spc: The format.
 * @f: function pointer.
 */
typedef struct spc
{
	char spc;
	int (*f)(va_list, char []);
} spc_f;
/** struct spc struct op */

/* functions Prototypes */

int _putchar(char c);
int _printf(const char *format, ...);
int handle_content(va_list args, int index, char content[]);
int handle_write_char(char c, char content[]);
int print_char(va_list args, char content[]);
int print_string(va_list args, char content[]);
int print_percent(va_list args, char content[]);
int print_int(va_list args, char content[]);
int print_rev(va_list args, char content[]);


#endif
