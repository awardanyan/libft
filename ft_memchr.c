/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:36:44 by anahvard          #+#    #+#             */
/*   Updated: 2026/01/28 12:53:04 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	unsigned char	d;
	size_t			i;

	i = 0;
	d = (unsigned char)c;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == d)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char data[] = {4, 5, 6, 7};
	int i = 0;
	while(i < 4)
	{
		printf("%p\n", &data[i]);
		i++;
	}
	printf("\n%p\n", ft_memchr(data, 6, 4));

}*/
