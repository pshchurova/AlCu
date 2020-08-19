#include "libft.h"

char	*ft_strnew(unsigned long int size)
{
	char				*mem;
	unsigned long int	i;

	i = 0;
	mem = 0;
	mem = (char*)malloc(sizeof(char) * (size + 1));
	if (mem)
		while (i < (size + 1))
		{
			mem[i] = '\0';
			i++;
		}
	return (mem);
}
