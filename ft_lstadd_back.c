#include "libft.h"

void	ft_lstadd_back(t_list **head, t_list *new)//**head=&head
{
	t_list	*lastNode;

	if (!head || !new)
		return;
	if (*head == NULL)
	{
		*head = new;
		return;
	}
	lastNode = ft_lstlast(*head);
	lastNode->next = new;
}	
