/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:40:43 by anahvard          #+#    #+#             */
/*   Updated: 2026/02/06 11:28:40 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
	int x = 5;
	int y = 10;

	t_list *head = ft_lstnew(&x);
	t_list *node2 = ft_lstnew(&y);

	printf("%d ", *(int *)head->content);
	printf("%d\n", *(int *)node2->content);

	ft_lstadd_front(&head, node2);

	t_list *temp = head;
	while(temp)
	{
		printf("%d ", *(int *)temp->content);
		temp = temp->next;
	}
}*/
