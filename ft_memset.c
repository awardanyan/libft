/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:06:51 by anahvard          #+#    #+#             */
/*   Updated: 2026/01/27 13:51:23 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, int size)
{
	unsigned char	*temp;
	int				i;

	temp = (unsigned char *)str;
	i = 0;
	while (i < size)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	int i = 0;
	char s[4];
	ft_memset(s,'#', 4);
	while (i < 4)
	{
		printf("%c", s[i]);
		i++;
	}
}*/
