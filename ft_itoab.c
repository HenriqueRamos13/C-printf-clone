#include "ft_printf.h"

void	ft_itoab(int n, char *p, char *base)
{
	int	base_pos;
	int 	size;
	int 	copy;
	int	base_len;

	base_len = ft_strlen(base);
	size = 0;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	copy = n;
	while (copy > 0)
	{
		copy /= base_len;
		size++;
	}
	while (n > 0)
	{
		base_pos = n % base_len;
		if (base_pos <= 9)
			p[size - 1] = base[base_pos];
		else
			p[size - 1] = base[base_pos];
		size--;
		n = n / base_len;
	}
}
