#include "libft.h"

char	*ft_strmap(char const *src, char (*f)(char))
{
	unsigned long int	i;
	unsigned long int	len;
	char				*dst;

	i = 0;
	len = 0;
	dst = 0;
	if (src != 0)
	{
		while (src[i] != '\0')
			i++;
		len = i;
		i = 0;
		dst = (char *)malloc(sizeof(char) * (len + 1));
		if (dst)
		{
			while (i < len)
			{
				dst[i] = f(src[i]);
				i++;
			}
			dst[i] = '\0';
		}
	}
	return (dst);
}
