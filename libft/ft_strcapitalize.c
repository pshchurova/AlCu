#include "libft.h"

char	*ft_strcapitalize(char *s)
{
	int		i;

	i = 0;
	if (s && *s)
		while (s[i] != '\0')
		{
			if (ft_islower(s[i]) && (i == 0 || !ft_isalnum(s[i - 1])))
				s[i] = s[i] - 32;
			if (ft_isupper(s[i]) && (i != 0 && ft_isalnum(s[i - 1])))
				s[i] = s[i] + 32;
			i++;
		}
	return (s);
}
