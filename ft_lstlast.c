/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:17:09 by anahvard          #+#    #+#             */
/*   Updated: 2026/02/06 11:31:59 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return NULL;
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
	int x = 5;
	int y = 10;
	int z = 15;
	int i = 20;

	t_list *head = ft_lstnew(&x);
	t_list *node1 = ft_lstnew(&y);
	t_list *node2 = ft_lstnew(&z);
	t_list *node3 = ft_lstnew(&i);

	head->next = node1;
	node1->next = node2;
	node2->next = node3;
	t_list *temp = ft_lstlast(node1);
	if (temp == NULL)
		return 0;
	printf("%d\n", *(int *)temp->content);
}*/
