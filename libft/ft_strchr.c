#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (s[0] != '\0')
	{
		if (s[0] == c)
			return ((char*)s);
		s++;
	}
	if (s[0] == c)
		return ((char*)s);
	return (0);
}
