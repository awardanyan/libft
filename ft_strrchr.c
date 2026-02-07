/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:01:43 by anahvard          #+#    #+#             */
/*   Updated: 2026/01/28 12:32:20 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char			*p;
	unsigned char	d;
	int				i;

	i = 0;
	p = NULL;
	d = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == d)
			p = (char *)&s[i];
		i++;
	}
	if (d == '\0')
		return ((char *)&s[i]);
	return (p);
}
/*
int main()
{
	const char str[10] = "hello";

	int i = 0;

	while (i < 6)
	{
		printf("%p\n", &str[i]);
		i++;
	}
	printf("\n%p\n", ft_strrchr(str, 'l'));
}*/
