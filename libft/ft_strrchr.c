#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *adr;

	adr = 0;
	while (s[0] != '\0')
	{
		if (s[0] == c)
			adr = &s[0];
		s++;
	}
	if (s[0] == c)
		adr = &s[0];
	return ((char*)adr);
}
