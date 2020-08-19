#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		n;
	int		i;
	char	*dst;

	i = 0;
	n = 0;
	while (s[n] != '\0')
		n++;
	dst = (char*)malloc(sizeof(char) * (n + 1));
	if (dst == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
