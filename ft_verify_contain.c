#include "ftprintf.h"

int	verify_contain(char c, char *list)
{
	char	*chars;
	int	len;

	len = ft_strlen(list);
	if (!(chars = malloc(sizeof(char) * (len + 1))))
		return (0);
	ft_memcpy(chars, list, len);
	while (*chars != '\0')
		if (*(chars++) == c)
			return (1);
	return (0);
}
