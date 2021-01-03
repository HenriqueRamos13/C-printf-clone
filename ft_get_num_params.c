#include "ftprintf.h"

int	get_num_params(const char *str)
{
	int	num_param;
	int	count;

	count = 0;
	num_param = 0;
	while (str[count] != '\0')
	{
		if (str[count] == '%'
			&& verify_contain(str[count + 1], CCONVERSIONS) == 1)
			num_param++;
		count++;
	}
	return (num_param);
}
