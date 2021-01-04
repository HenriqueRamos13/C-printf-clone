#include "ftprintf.h"

static	int	get_int_len(long int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_ltoa(long int n)
{
	size_t	size;
	char	*num;
	long	copy;

	copy = n;
	size = get_int_len(copy);
	if (!(num = ft_calloc(size + 1, sizeof(char))))
		return (NULL);
	if (copy <= 0)
	{
		num[0] = copy == 0 ? '0' : '-';
		copy = -copy;
		if (copy == 0)
			return (num);
	}
	while (copy > 0)
	{
		num[--size] = (copy % 10) + 48;
		copy /= 10;
	}
	return (num);
}

int	ft_print_uint(int n)
{
	long	int 	num;
	char	*str;

	if (n < 0)
	{
		num = (long int)(4294967295 + 1 + n);
	}
	else
		num = n;
	str = ft_ltoa(num);
	ft_print_string(str);
	return (ft_strlen(str));
}
