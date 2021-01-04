#include "ftprintf.h"

int	main()
{
	char test[90];

	ft_memcpy(test, "ola tudo bem?\n", 15);
	//ft_printf("a %c %X %mano %o se ok\n", 't', 12, -12);
	ft_printf("aaaaaa\n");
	ft_printf("um char so %c\n", 'f');
	ft_printf("uma string %s\n", "so uma string");
	ft_printf("um inteiro %i\n", -2147483648);
	ft_printf("em octal %o\n", 12);
	ft_printf("em hexa %x\n", 12);
	ft_printf("inteiro %i string %s char %c\n", 12, "strings", 'f');
	//printf("%X\n", 12);
	ft_printf("meu uint %u um doi %u\n", 30, -30);
	printf("normal uint %u um dois %u\n", 30, -30);
	printf("um teste int %*s\n", 4, "po");
	printf("%-*s\n", 8, "abc");
	printf("%8s\n", "abc");
	return (0);
}
