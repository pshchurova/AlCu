#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *ptr;

	ptr = &s[n - 1];
	while (n > 0)
	{
		*ptr = c;
		n--;
		ptr--;
	}
	return (s);
}
