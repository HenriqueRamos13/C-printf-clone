#include "ftprintf.h"

void	ft_print_char(char c)
{
	write(1, &c, 1);
}