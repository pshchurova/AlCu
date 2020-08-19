#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;

	new_list = 0;
	if (lst && f)
		if (lst)
		{
			new_list = malloc(sizeof(t_list));
			if (new_list)
			{
				new_list->content = (f(lst))->content;
				new_list->content_size = (f(lst))->content_size;
				new_list->next = ft_lstmap(lst->next, f);
			}
		}
	return (new_list);
}
