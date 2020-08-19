#include "libft.h"

void	ft_strdel(char **ap)
{
	if (ap != 0)
	{
		free(*ap);
		*ap = NULL;
	}
}
