#include "ftprintf.h"

int	print_with_verify(const char *str, va_list args)
{
	int	cont;
	int	totalchars;
	
	totalchars = 0;
	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] == '%' && verify_contain(str[cont + 1], CCONVERSIONS) == 1)
		{
			cont++;
			totalchars += format(str[cont], args);
		}
		else
		{
			write(1, &(str[cont]), 1);
			totalchars += 1;
		}
		cont++;
	}
	return (totalchars);
}
