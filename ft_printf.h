#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "./libft/libft.h"
# define OCTAL "01234567"
# define HEX "0123456789abcdef"
int	ft_printf(const char *str, ...);
void	ft_itoab(int n, char *p, char *base);

#endif
