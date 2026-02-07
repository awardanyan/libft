/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anahvard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:36:33 by anahvard          #+#    #+#             */
/*   Updated: 2026/01/31 11:42:40 by anahvard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int  count_word(const char *s, char c)
{
    int i = 0;
    int count = 0;

    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
        {
            count++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    return (count);
}

static int  len_word(const char *s, char c)
{
    int i = 0;

    while (s[i] && s[i] != c)
        i++;
    return (i);
}

static void free_split(char **str, int j)
{
    while (j > 0)
        free(str[--j]);
    free(str);
}

static int  fill_words(char **str, const char *s, char c)
{
    int i = 0;
    int j = 0;
    int k;
    int len;

    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
        {
            len = len_word(&s[i], c);
            str[j] = malloc(len + 1);
            if (!str[j])
                return (free_split(str, j), 0);
            k = 0;
            while (k < len)
                str[j][k++] = s[i++];
            str[j++][k] = '\0';
        }
    }
    str[j] = NULL;
    return (1);
}

char    **ft_split(char const *s, char c)
{
    char **str;

    if (!s)
        return (NULL);
    str = malloc((count_word(s, c) + 1) * sizeof(char *));
    if (!str)
        return (NULL);
    if (!fill_words(str, s, c))
        return (NULL);
    return (str);
}

