#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	if (alst && del)
	{
		while (*alst)
		{
			tmp = alst[0]->next;
			(*del)(alst[0]->content, alst[0]->content_size);
			free(alst[0]);
			alst[0] = tmp;
		}
		*alst = 0;
	}
}
