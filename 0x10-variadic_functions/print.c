#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct format
	{
		char format;
		void (*func)(va_list *ap);
	}func_stru;
typedef struct
{
	char checker;
	int (*count)(va_list *ap);
}counter;



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
		_putchar(n + '0');
		return;
	}
	else
	{
		_puts_int(n / 10);
		_putchar(n % 10 + '0');
	}
}
int _count_int(int a, int *len)
{
	int n;

	if (a < 0)
	{
		n = a * -1;
		len++;
	}
	else
	{
		n = a;
	}
	if (n / 10 == 0)
	{
		len++;
		return (*len);
	}
	else
	{
		_count_int(n / 10, len);
		len++;
	}
	return(0);
}
int _count_int_va(va_list *ap)
{
	int n;
	int len;

	n = va_arg(*ap, int);
	len = _count_int(n, 0);

	return (len);
}


/**
 *
 *
 */
void _print_char(va_list *ap)
{
	_putchar(va_arg(*ap, int));
}
void _print_int(va_list *ap)
{
	_puts_int(va_arg(*ap, int));
}

/**
 *
 *
 *
 */
void _print_str(va_list *ap)
{
	_puts_str(va_arg(*ap, char *));
}
int str_len( va_list *ap)
{
	int len = 0;
	char *str = va_arg(*ap, char *);
	while (*str != '\0')
		len++;
	return (len);
}
int char_count(va_list *ap)
{
	int c = 0;
	while (ap)
		c = 1;
	return (c);
}



/**
 * _printf - returns the number of caharachters printed and
 * writes output to the standard output system
 * @format: is a string containing the number of format
 * Return: the number of chars printed
 */

int _printf(const char *format, ...)
{
	int i, j, k = 0;
	int len = 0;
	va_list ap;
	func_stru func_list[] = {
		{'c', _print_char},
		{'s', _print_str},
		{'d', _print_int},
		{'\0', NULL}
	};
	counter count_func[] = {
		{'c', char_count},
		{'s', str_len},
		{'d', _count_int_va},
		{'\0', NULL}
	};

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{ 
		if (format[i] == '%')
		{
			for (j = 0; j < 3; j++)
			{
				if (format[i + 1] != '\0' && format[i + 1] == func_list[j].format)
				{
				func_list[j].func(&ap);
				len = len + count_func[j].count(&ap);
		
				}
			}
		}
	}
	return (len);
	printf("\n len = %d\n", len);
}

int main(void)
{
	_printf("the %c quick %d fo %dx is %s  ", 'g', 12345, 987654321 , " print me");
	_putchar('\n');

	//printf("%d\n", len);


	return (0);
}
