#include "libft.h"

char	*ft_strupcase(char *s)
{
	int		i;

	i = 0;
	if (s && *s)
		while (s[i])
		{
			s[i] = ft_toupper(s[i]);
			i++;
		}
	return (s);
}
