#include "ftprintf.h"

void	print_with_verify(const char *str, va_list args)
{
	int	cont;
	
	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] == '%' && verify_contain(str[cont + 1], CCONVERSIONS) == 1)
		{
			cont++;
			format(str[cont], args);
		}
		else
			write(1, &(str[cont]), 1);
		cont++;
	}
}
