/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:49:35 by anahvard          #+#    #+#             */
/*   Updated: 2026/01/27 17:58:43 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	string_len;

	i = 0;
	string_len = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size > dest_len)
		string_len = dest_len + src_len;
	else
		string_len = size + src_len;
	while (src[i] && size > (dest_len + 1))
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (string_len);
}
/*
int main()
{
	char dest[10] = "Hello";
	char src[10] = "worl";

	size_t size = 3;
	printf("%zu\n", ft_strlcat(dest, src, size));
	printf("%s", dest);
	return 0;
}*/
