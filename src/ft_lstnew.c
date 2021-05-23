#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	if (!(nodo = malloc(sizeof(t_list))))
		return (0);
	nodo->content = content;
	nodo->next = NULL;
	return (nodo);
}
