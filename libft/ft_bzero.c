#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *ptr;

	ptr = &s[n - 1];
	while (n > 0)
	{
		*ptr = '\0';
		n--;
		ptr--;
	}
}
