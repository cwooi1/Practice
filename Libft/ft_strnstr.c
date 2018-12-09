/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 08:30:02 by sikim             #+#    #+#             */
/*   Updated: 2018/12/06 08:30:24 by sikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*lg;
	const char	*sm;
	size_t		i;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack != '\0' && len > 0)
	{
		lg = haystack;
		sm = needle;
		i = len;
		while (*sm != '\0' && *lg == *sm && i--)
		{
			lg++;
			sm++;
		}
		if (*sm == '\0')
			return ((char*)haystack);
		haystack++;
		--len;
	}
	return (NULL);
}
