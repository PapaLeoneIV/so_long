/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:52 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:59 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	while (*lst)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
	*lst = NULL;
}

/* void delete(void *nodo)
{
	free(nodo);
}

void print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d -> ", *(int *)(lst->content));
		lst = lst->next;
	}
	printf("NULL\n");
}

int main(void)
{
	t_list *head = NULL;

	int		*n1 = malloc(sizeof(int));
	*n1 = 42;
	t_list	*node1 = ft_lstnew(n1);

	int		*n2 = malloc(sizeof(int));
	*n2 = 99;
	t_list *node2 = ft_lstnew(n2);

	head = node2;
	node2->next = node1;

	printf("Linked List (before clear): ");
	print_list(head);

	ft_lstclear(&head, delete);

	printf("Linked List (after clear): ");
	print_list(head);
} */