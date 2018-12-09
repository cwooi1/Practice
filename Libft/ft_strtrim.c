/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 08:55:19 by sikim             #+#    #+#             */
/*   Updated: 2018/12/06 08:57:21 by sikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	size_t		trim1;
	size_t		trim2;
	size_t		i;

	if (!s)
		return (0);
	i = 0;
	while (ft_iswhitespace(s[i]))
	{
		i++;
		if (!s[i])
			return (ft_strnew(1));
	}
	trim1 = i;
	while (s[i])
		i++;
	i--;
	while (ft_iswhitespace(s[i]))
		i--;
	i++;
	trim2 = i;
	return (ft_strsub(s, (unsigned int)trim1, \
		(trim2 - trim1)));
}
