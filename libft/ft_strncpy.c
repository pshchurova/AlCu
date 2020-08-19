#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[0];
		if (src[0] != '\0')
			src++;
		i++;
	}
	return (dest);
}
