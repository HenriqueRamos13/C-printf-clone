#include "ftprintf.h"

void	ft_print_int(int n)
{
	char	*num;

	num = ft_itoa(n);
	ft_print_string(num);
}
