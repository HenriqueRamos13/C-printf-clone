#include "ft_printf.h"

int	main()
{
	char test[90];

	ft_memcpy(test, "ola tudo bem\n", 13);
	ft_printf("a %c %X %mano %o se ok\n", 't', 524275016, -12);
	printf("%X", 524275016);
	return (0);
}
