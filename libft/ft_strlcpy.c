#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dst && src)
	{
		while (!(src[j] == '\0'))
			j++;
		if (size < 1)
			return (j);
		while (*src != '\0' && i < (size - 1))
		{
			dst[i] = (char)*src;
			i++;
			src++;
		}
		dst[i] = '\0';
		return (j);
	}
	return (0);
}
