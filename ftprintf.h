#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "./libft/libft.h"
# define OCTAL "01234567"
# define HEXUPPER "0123456789ABCDEF"
# define HEXLOWER "0123456789abcdef"
# define CCONVERSIONS 	"cspdiouxXf%"
# define CFLAGS 		"#-+ .*0123456789hljz"
# define ALLSYMBOLS 	"cspdiouxXfyb%#-+ .*0123456789hLljz"
typedef struct			s_struct
{
	char				type;
}					t_struct;
int	ft_printf(const char *str, ...);
void	ft_itoab(int n, char *p, char *base);
int	get_num_params(const char *str);
int	print_with_verify(const char *str, va_list args);
int		verify_contain(char c, char *list);
int		format(int c, va_list args);
int		ft_print_char(char c);
int		ft_print_string(char *str);
int		ft_print_octal(int numi);
int		ft_print_hex(int num, char *base);
int		ft_print_int(int n);
int		ft_print_uint(int n);

#endif
