/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 08:57:35 by sikim             #+#    #+#             */
/*   Updated: 2018/12/06 08:59:55 by sikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_word_count(const char *s, char d)
{
	int		position;
	int		nb;

	position = 0;
	nb = 0;
	while (*s != '\0')
	{
		if (*s != d && position == 0)
		{
			position = 1;
			nb++;
		}
		if (*s == d & position == 1)
			position = 0;
		s++;
	}
	return (nb);
}

static int	find_word_len(const char *s, char d)
{
	int		len;

	len = 0;
	while (*s != '\0' && *s != d)
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		word;
	int		i;

	i = 0;
	if (!s)
		return (0);
	word = find_word_count(s, c);
	str = (char**)malloc(sizeof(*str) * (find_word_count(s, c) + 1));
	if (str == NULL)
		return (NULL);
	while (word > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		str[i] = ft_strsub(s, 0, find_word_len(s, c));
		if (str[i] == NULL)
			return (NULL);
		s = s + find_word_len(s, c);
		i++;
		word--;
	}
	str[i] = NULL;
	return (str);
}
