#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define CONT_SIZE 1024

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct spc
{
	char spc;
	int (*f)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct spc spc_f;

/* functions Prototypes */

/**int _putchar(char c);*/
int _printf(const char *format, ...);
int handle_content(const char *data,int *index, va_list args, char content[])
int handle_write_char(char c, char content);
int print_char(va_list args, char content[]);
int print_string(va_list args, char content[]);
int print_percent(va_list args, char content[]);
/**void print_int(va_list args, int content[]);*/

#endif
