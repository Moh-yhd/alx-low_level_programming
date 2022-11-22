#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct format
	{
		char format;
		void (*func)(va_list ap);
	}func_stru;

typedef struct
{
	char checker;
	int (*func)(va_list qp)
}


/**
 *
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print_str - prints a string
 * @s: is a pointer to a string
 * Return: nothing
 */
void _puts_str(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_str(s + 1);
	}
}

/**
 *
 *
 *
 */
void _puts_int(int a)
{
	int n;

	if (a < 0)
	{
		_putchar('-');
		n = a * -1;
	}
	else
	{
		n = a;
	}
	if (n / 10 == 0)
	{
		_putchar(n);
		return;
	}
	else
	{
		_puts_int(n / 10);
		_putchar(n % 10);
	}
}

/**
 *
 *
 */
void _print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
}

/**
 *
 *
 *
 */
void _print_str(va_list ap)
{
	_puts_str(va_arg(ap, char *));
}


/**
 * _printf - returns the number of caharachters printed and
 * writes output to the standard output system
 * @format: is a string containing the number of format
 * Return: the number of chars printed
 */

int _printf(const char *format, ...)
{
	int i, j;
	va_list ap;
	func_stru func_list[] = {
		{'c', _print_char},
		{'s', _print_str},
		{'\0', NULL}
	};

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{ 
		//if (format[i] != '%')
			//_putchar(format[i]);
		if (format[i] == '%')
		{
			for (j = 0; j < 2; j++)
			{
			if (format[i + 1] != '\0' && format[i + 1] == func_list[j].format)
				{
				func_list[j].func(ap);
				}
			}
		}
	}
	va_end(ap);
	return (0);
}

int main(void)
{
	_printf("the quick %s fox %s over %c dog called %c  ", "Brown", "jumps", 'A', 'B');
	_putchar('\n');

	return (0);
}
