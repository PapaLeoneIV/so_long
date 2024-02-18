/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:53 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:59 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*res;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (NULL);
	ptr = lst;
	res = NULL;
	while (ptr)
	{
		newnode = ft_lstnew((*f)(ptr->content));
		if (newnode == NULL)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, newnode);
		ptr = ptr->next;
	}
	return (res);
}
/*
void delete(void *nodo)
{
	free(nodo);
}

void *addten(int *contenuto)
{
	contenuto = contenuto + 10;
	return contenuto;
}

int		main(void)
{
	t_list *lst;
	t_list	*newnode;
	t_list	*node1;
	t_list	*node2;
	t_list	*nodend;
	t_list *newlist;

	newnode = ft_lstnew((int *)10);
	ft_lstadd_back(&lst, newnode);
	node1 = ft_lstnew((int *)20);
	ft_lstadd_back(&lst, node1);
	node2 = ft_lstnew((int *)30);
	ft_lstadd_back(&lst, node2);
	nodend = ft_lstnew((int *)40);
	ft_lstadd_back(&lst, nodend);

	newlist = ft_lstmap(lst, addten, delete);

	while(newlist)
	{
		printf("contenuto nodo : %ls\n", (int *)newlist->content);
		newlist = newlist->next;
	}
}*/
