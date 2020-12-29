#include "ft_printf.h"

int	main()
{
	char test[90];

	ft_memcpy(test, "ola tudo bem?\n", 15);
	ft_printf("a %c %X %mano %o se ok\n", 't', 12, -12);
	printf("%X\n", 12);
	return (0);
}
