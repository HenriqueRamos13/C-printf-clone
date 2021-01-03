#include "ftprintf.h"

void	ft_print_hex(int num, char *base)
{
	char *p;

	p = ft_calloc(33, sizeof(char));
	ft_itoab(num, p, base);
	ft_print_string(p);
}
