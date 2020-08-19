#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t			i;

	i = 0;
	tmp_dst = dst;
	tmp_src = (unsigned char*)src;
	while (i < n)
	{
		tmp_dst[i] = (unsigned char)(tmp_src[i] + '\0');
		i++;
	}
	return (dst);
}
