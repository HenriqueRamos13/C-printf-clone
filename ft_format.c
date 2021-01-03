#include "ftprintf.h"

void	format(int c, va_list args)
{
	if (c == 'c')
		ft_print_char(va_arg(args, int));
	else if (c == 's')
		ft_print_string(va_arg(args, char *));
	else if (c == 'o')
		ft_print_octal(va_arg(args, unsigned int));
	else if (c == 'x')
		ft_print_hex(va_arg(args, unsigned int), HEXLOWER);
	else if (c == 'X')
		ft_print_hex(va_arg(args, unsigned int), HEXUPPER);
	else if (c == 'd' || c == 'i')
		ft_print_int(va_arg(args, int));
	/*else if (c == 'p')
		ft_treat_pointer(va_arg(args, unsigned long long));
	else if (c == 'u')
		ft_treat_uint((unsigned int)va_arg(args, unsigned int));
	else if (c == '%')
		ft_treat_percent(flags);*/
}
