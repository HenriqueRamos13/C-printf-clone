#include "ft_printf.h"

static	int	verify_contain(char c)
{
	char *chars;

	if (!(chars = malloc(sizeof(char) * 15)))
		return (0);
	ft_memcpy(chars, "idsoxXeEcfgpu", 14);
	while (*chars != '\0')
		if (*(chars++) == c)
			return (1);
	return (0);
}

static	void	*sanitize_var(char type, void *var)
{
	if (type == 'i')
		return ((char *)ft_itoa((int)var));
	else if (type == 'd')
		return ((char *)ft_itoa((int)var));
	else if (type == 's')
		return (var);
	else if (type == 'o')
	{
		char		*final;
		int	copy;

		copy = (int)var;

		final = ft_calloc(sizeof(char), (int)var < 0 ? 9 : 10);
		if (copy < 0)
		{
			final[0] = '-';
			copy = copy * -1;
		}
		ft_itoab(copy, final, "01234567");
		return (final);
	}
	else if (type == 'x' || type == 'X')
	{
		char		*final;
		int	copy;

		copy = (int)var;
		final = ft_calloc(sizeof(char), (int)var < 0 ? 9 : 10);
		if (copy < 0)
		{
			final[0] = '-';
			copy = copy * -1;
		}
		ft_itoab(copy, final, type == 'x' ? "0123456789abcdef" : "0123456789ABCDEF");
		return (final);
	}
	else if (type == 'c')
	{
		char	*final;

		if (!(final = ft_calloc(sizeof(char), 2)))
			return (NULL);
		final[0] = (char)var;
		return (final);
	}
	/*else if (type == 'e' || type == 'E')
		return ((char)('0'));	
	else if (type == 'f')
		return ((char)('0'));
	else if (type == 'g' || type == 'G')
		return ((char)('0'));
	else if (type == 'p')
		return ((char)('0'));
	else if (type == 'u')
		return ((char)('0'));*/
	return (NULL);
}

int	ft_printf(const char *str, ...)
{
	va_list	i_va_list;
	int	num_param;
	int	count;
	char	*var;

	count = 0;
	num_param = 0;
	while (str[count] != '\0')
	{
		if (str[count] == '%' && verify_contain(str[count + 1]) == 1)
			num_param++;
		count++;
	}
	if (num_param > 0)
		va_start(i_va_list, str);
	while (*str)
	{
		if (*str == '%' && verify_contain(*(str + 1)) == 1)
		{
			var = sanitize_var(*(str + 1), va_arg(i_va_list, void*));
			write(1, var, ft_strlen(var));
			str++;
		}
		else
		{
			write(1, &(*str), 1);
		}
		str++;
	}
	va_end(i_va_list);
	return (1);
}
