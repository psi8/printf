#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	print_char(int c)
{
	return (write(1, &c, 1));
}

int	print_str(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		print_char((int)*str);
		++str;
		++count;
	}
	return (count);
}
int	print_digit(long n, int base)
{
	int		count;
	char	*symbols;

	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, 10) + 1);
	}
	else if (n < base)
		return (print_char(symbols[n]));
	else 
	{
		count = print_digit(n / 10, 10);
		return (count + print_digit(n % 10, 10));
	}
}

int	print_hex(long n, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, 16) + 1);
	}
	else if (n < base)
		return (print_char(symbols[n]));
	else 
	{
		count = print_digit(n / 16, 16);
		return (count + print_digit(n % 16, 16));
	}
}

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	else if (specifier == 'd')
		count += print_digit((long)(va_arg(ap, int)), 10);
	else if (specifier == 'x')
		count += print_digit((long)(va_arg(ap, unsigned int)), 16);
	else
		count += write(1, &specifier, 1);
	return (count); 
}

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
			else 
				count += write(1, format, 1);
			++format;
	}
	va_end(ap);		
	return (count);
}
int	main()
{
	// int count;
	// int count1;
	
	ft_printf("Hello %s, today is %d, in hex %x, char ->%c\n",
	"Paul",
	27,
	27,
	'z');
	// count = ft_printf("hello %s\n", "John");
	// ft_printf("The chars written are %d\n", count);
	// count = ft_printf("%d\n", INT32_MIN);
	// ft_printf("The chars written are %d\n", count);
	// count1 = printf("%d\n", INT32_MIN);
	// printf("The chars written are %d\n", count);
}