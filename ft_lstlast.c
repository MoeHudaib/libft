#include "libft.h"

t_list	*ft_lstlast(t_list *head)
{
	t_list	*current;

	if (!head)
		return (NULL);
	current = head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}
