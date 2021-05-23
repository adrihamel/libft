#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cont;
	t_list	*aux;

	if (lst == NULL)
		return (0);
	aux = lst;
	cont = 0;
	while (aux->next != NULL)
	{
		cont++;
		aux = aux->next;
	}
	if (aux->next == NULL)
		cont++;
	return (cont);
}
