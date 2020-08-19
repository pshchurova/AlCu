#include "libft.h"

static void	fk_new_norm(char *s, long long int *m, int *i, int *isneg)
{
	if (*m == 0)
	{
		(*i)--;
		s[*i] = '0';
	}
	while (*m != 0)
	{
		(*i)--;
		s[*i] = (*m % 10) + '0';
		*m /= 10;
	}
	if (*isneg == -1)
	{
		(*i)--;
		s[*i] = '-';
	}
}

void		ft_putnbr(int n)
{
	int				i;
	char			s[12];
	int				isneg;
	long long int	m;

	m = n;
	i = 12;
	i--;
	s[i] = '\0';
	isneg = 1;
	if (m < 0)
	{
		m = -m;
		isneg = -1;
	}
	fk_new_norm(s, &m, &i, &isneg);
	while (i < 11)
	{
		write(1, &s[i], 1);
		i++;
	}
}
