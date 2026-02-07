/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:41:55 by anahvard          #+#    #+#             */
/*   Updated: 2026/02/06 11:37:50 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;
	
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
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

	ft_lstadd_back(NULL,node3);
	t_list *temp = head;
	while (temp)
	{
		printf("%d\n", *(int *)temp->content);
		temp = temp->next;
	}

}*/
