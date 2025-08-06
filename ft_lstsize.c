#include "libft.h"

int	ft_lstsize(t_list *head)
{
	t_list	*current;
	int		count;

	if (!head)
		return (0);
	current = NULL;
	current = head;
	count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
