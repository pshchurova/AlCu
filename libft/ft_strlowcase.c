#include "libft.h"

char	*ft_strlowcase(char *s)
{
	int		i;

	i = 0;
	if (s && *s)
		while (s[i])
		{
			s[i] = ft_tolower(s[i]);
			i++;
		}
	return (s);
}
