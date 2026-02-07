/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:30:54 by anahvard          #+#    #+#             */
/*   Updated: 2026/02/06 16:50:52 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void del(void *content)
{
	free(content);
}

void *f(void *content)
{
	int *x = malloc(sizeof(content));
	*x = *(int *)content + 5;
	return x;
}
*/
static	t_list	*create(void *content, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	void	*new_content;

	new_content = f(content);
	if (!new_content)
		return (NULL);
	new_node = malloc(sizeof(t_list));
	if (!new_node)
	{
		del(new_content);
		return (NULL);
	}
	new_node->content = new_content;
	new_node->next = NULL;
	return (new_node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*last;
	t_list	*temp;

	head = NULL;
	last = NULL;
	temp = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		temp = create(lst->content, f, del);
		if (!temp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		if (!head)
			head = temp;
		else
			last->next = temp;
		last = temp;
		lst = lst->next;
	}
	return (head);
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

	t_list *temp = head;
	printf("original list \n");
	while (temp)
	{
		printf("%d\n", *(int *)temp->content);
		temp = temp->next;
	}

	printf("\nnew list:\n");
	temp = ft_lstmap(NULL, &f, del);
	while (temp)
        {
                printf("%d\n", *(int *)temp->content);
                temp = temp->next;
        }

	printf("\noriginal list for check \n");
	temp = head;
	while (temp)
        {
                printf("%d\n", *(int *)temp->content);
                temp = temp->next;
        }
}*/
