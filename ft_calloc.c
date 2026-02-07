/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:13:24 by anahvard          #+#    #+#             */
/*   Updated: 2026/02/06 18:25:41 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	if (size != 0 && nmemb > (SIZE_MAX / size))
		return NULL;
	p = malloc(nmemb * size);
	if (!p)
		return NULL;
	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
