#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t		i;
	size_t		m;
	char		*dst;

	i = 0;
	m = 0;
	while (s[m] != '\0')
		m++;
	if (m > n)
		dst = (char*)malloc(sizeof(char) * (n + 1));
	if (m <= n)
		dst = (char*)malloc(sizeof(char) * (m + 1));
	if (dst == NULL)
		return (NULL);
	while (s[i] != '\0' && i < n)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
