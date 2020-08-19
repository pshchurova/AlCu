#include "libft.h"

static char	*ft_cpyw(char *dst, char const *s1, char const *s2)
{
	int i;

	i = 0;
	while (s1[0] != '\0')
	{
		dst[i] = s1[0];
		i++;
		s1++;
	}
	while (s2[0] != '\0')
	{
		dst[i] = s2[0];
		i++;
		s2++;
	}
	dst[i] = '\0';
	return (dst);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	unsigned long int	i;
	unsigned long int	j;
	char				*dst;

	i = 0;
	j = 0;
	dst = 0;
	if (s1 != 0 && s2 != 0)
	{
		while (s1[i] != '\0')
			i++;
		while (s2[j] != '\0')
			j++;
		dst = (char*)malloc(sizeof(char) * (i + j + 1));
		if (dst)
		{
			dst = ft_cpyw(dst, s1, s2);
		}
	}
	return (dst);
}
