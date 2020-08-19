#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;
	char	*c;
	size_t	i;

	if (size == 0)
		return (0);
	i = 0;
	mem = 0;
	mem = malloc(size);
	if (mem)
		while (i < size)
		{
			c = &mem[i];
			*c = '\0';
			i++;
		}
	return (mem);
}
