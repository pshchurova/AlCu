#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (!(dst[i] == '\0'))
		i++;
	while (!(src[j] == '\0'))
		j++;
	if (size <= i)
		return (j + size);
	k = i;
	while (*src != '\0' && k < (size - 1))
	{
		dst[k] = (char)*src;
		k++;
		src++;
	}
	dst[k] = '\0';
	return (i + j);
}
