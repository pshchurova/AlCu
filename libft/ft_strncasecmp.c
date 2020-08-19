#include "libft.h"

int		ft_strncasecmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && !(s1[i] == '\0' || s2[i] == '\0' ||
		((ft_tolower(s1[i]) - ft_tolower(s2[i])) != 0)))
		i++;
	return ((unsigned char)ft_tolower(s1[i]) -
			(unsigned char)ft_tolower(s2[i]));
}
