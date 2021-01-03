#include "ftprintf.h"

void	ft_print_string(char *str)
{
	while (*str != '\0')
		ft_print_char(*(str++));
}
