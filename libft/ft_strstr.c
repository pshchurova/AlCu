#include "libft.h"

static char	*ft_check(const char *big, const char *ltl, int k)
{
	char	*adr;
	int		i;
	int		j;

	i = k;
	j = 0;
	while (!(big[i] == '\0' || ltl[j] == '\0'))
	{
		if (big[i] == ltl[j])
		{
			if (j == 0)
				adr = (char*)&big[i];
			j++;
		}
		else
			j = 0;
		i++;
	}
	if (ltl[j] == '\0')
		return (adr);
	else
		return (0);
}

char		*ft_strstr(const char *big, const char *ltl)
{
	char	*adr;
	int		i;

	i = 0;
	if (ltl[0] == '\0')
		return ((char*)&big[0]);
	adr = 0;
	while (big[i] != '\0' && adr == 0)
	{
		adr = ft_check(big, ltl, i);
		i++;
	}
	return (adr);
}
