#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


void print_all(const char * const format, ...)
{
	int i, j;
	va_list ap;
	fun_p fun_list[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};
	
	va_start(ap, format);
	i = 0;
	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == fun_list[j].format)
			{
				if(i)
				printf(", ");
				fun_list[j].f(&ap);
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

void print_int(va_list *ap)
{
	printf("%d", va_arg(*ap, int ));
}
void print_str(va_list *ap)
{
	printf("%s", va_arg(*ap, char *));
}
void print_char(va_list *ap)
{
	printf("%c", va_arg(*ap, int));
}
void print_float(va_list *ap)
{
	printf("%f", va_arg(*ap, double));
}


