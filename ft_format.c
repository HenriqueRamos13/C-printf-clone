#include "ftprintf.h"

int	format(int c, va_list args)
{
	if (c == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (c == 's')
		return (ft_print_string(va_arg(args, char *)));
	else if (c == 'o')
		return (ft_print_octal(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), HEXLOWER));
	else if (c == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), HEXUPPER));
	else if (c == 'd' || c == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (c == 'u')
		return (ft_print_uint((int)va_arg(args, int)));
	return (0);
	/*else if (c == 'p')
		ft_treat_pointer(va_arg(args, unsigned long long));
else if (c == '%')
		ft_treat_percent(flags);*/
}
