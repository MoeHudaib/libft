#include "libft.h"

void	ft_lstiter(t_list *head, void (*f)(void *))
{
	t_list	*current;

	if (!head || !f)
		return;
	current = head;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}
