#include "ftprintf.h"

void	ft_print_octal(int num)
{
	char *p;

	p = ft_calloc(33, sizeof(char));
	ft_itoab(num, p, OCTAL);
	ft_print_string(p);
}
