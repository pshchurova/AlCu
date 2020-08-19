#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s != 0 && fd > 0)
		while (s[0] != '\0')
		{
			write(fd, s, 1);
			s++;
		}
}
