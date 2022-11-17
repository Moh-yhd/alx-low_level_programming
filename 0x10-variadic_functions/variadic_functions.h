#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct format
{
	char format;
	void (*f)(va_list *ap);
}fun_p;

void print_char(va_list *ap);
void print_int(va_list *ap);
void print_float(va_list *ap);
void print_str(va_list *ap);
#endif
