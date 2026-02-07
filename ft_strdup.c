/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:58:30 by anahvard          #+#    #+#             */
/*   Updated: 2026/01/28 17:01:53 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t		len;

	len = ft_strlen(s);
	dest = malloc(len + 1);
	if (!dest)
		return (0);
	ft_strlcpy(dest, s, len + 1);
	return (dest);
}
