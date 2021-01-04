#include "ftprintf.h"

int	ft_print_string(char *str)
{
	while (*str != '\0')
		ft_print_char(*(str++));
	return (ft_strlen(str));
}
