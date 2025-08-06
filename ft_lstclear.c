#include "libft.h"

void	ft_lstclear(t_list **head, void (*del)(void*))
{
	t_list	*current;
	t_list	*temp;

	if (!head || !del || !*head)
		return;
	current = *head;
	while (current != NULL)
	{
		temp = current->next;
		ft_lstdelone(current, del);
		current = temp;
	}
	*head = NULL;
}
