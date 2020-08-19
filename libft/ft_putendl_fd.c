#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char n;

	n = '\n';
	if (s != 0 && fd > 0)
	{
		while (s[0] != '\0')
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, &n, 1);
	}
}
