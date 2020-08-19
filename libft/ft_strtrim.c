#include "libft.h"

static char	*ft_filin(char const *s, char *dst, int start, int stop)
{
	int i;

	i = 0;
	if (stop >= start)
		dst = (char*)malloc(sizeof(char) * (stop - start + 2));
	else
		dst = (char*)malloc(sizeof(char) * 1);
	if ((stop >= start && dst) || dst)
	{
		while (start <= stop)
		{
			dst[i] = s[start];
			i++;
			start++;
		}
		dst[i] = '\0';
	}
	return (dst);
}

char		*ft_strtrim(char const *s)
{
	int		len;
	int		start;
	int		stop;
	char	*dst;

	len = 0;
	start = 0;
	dst = 0;
	if (s != 0)
	{
		while (s[len] != '\0')
			len++;
		stop = len - 1;
		while ((s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
			&& start < len)
			start++;
		while ((s[stop] == ' ' || s[stop] == '\n' || s[stop] == '\t')
			&& stop > 0)
			stop--;
		dst = ft_filin(s, dst, start, stop);
	}
	return (dst);
}
