#include "libft.h"

void	ft_lstdelone(t_list *node, void (*del)(void*))
{
	if (!node || !del)
		return;
	del(node->content);
	free(node);
}
