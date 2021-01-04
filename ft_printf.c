#include "ftprintf.h"

static	void	print(const char *str)
{
	write(1, str, ft_strlen(str) + 1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int	num_param;
	int	to_return;

	to_return = 0;
	num_param = get_num_params(str);
	if (!(num_param > 0))
	{
		print(str);
		return (ft_strlen(str));
	}
	va_start(args, str);
	to_return += print_with_verify(str, args);
	va_end(args);
	return (to_return);
}
