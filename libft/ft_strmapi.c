#include "libft.h"

char	*ft_strmapi(char const *src, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*dst;

	dst = 0;
	if (src != 0)
	{
		i = 0;
		len = 0;
		while (src[i] != '\0')
			i++;
		len = i;
		i = 0;
		dst = (char *)malloc(sizeof(char) * (len + 1));
		if (dst)
		{
			while (i < len)
			{
				dst[i] = f(i, src[i]);
				i++;
			}
			dst[i] = '\0';
		}
	}
	return (dst);
}
