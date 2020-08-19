#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*s_c;
	size_t				i;

	i = 0;
	s_c = (unsigned char*)s;
	while (i < n)
	{
		if ((unsigned char)c == s_c[i])
			return ((void*)(&s[i]));
		i++;
	}
	return (0);
}
