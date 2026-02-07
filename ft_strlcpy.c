/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:40:55 by anahvard          #+#    #+#             */
/*   Updated: 2026/02/06 17:38:40 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!src || !dest)
		return 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int main()
{
	char string[] = "Helgththytho";
	int size = 5;
	char d[size];
	
	int j = 0;
	
	int k = ft_strlcpy(d, NULL, size);
	printf("%d \n", k);
	while (d[j])
        {
                printf("%c", d[j]);
                j++;
        }

	return 0;
}
*/
