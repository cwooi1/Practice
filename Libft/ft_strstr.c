/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 08:29:30 by sikim             #+#    #+#             */
/*   Updated: 2018/12/06 08:29:51 by sikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *lg;
	const char *sm;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack != '\0')
	{
		lg = haystack;
		sm = needle;
		while (*sm != '\0' && *lg == *sm)
		{
			lg++;
			sm++;
		}
		if (*sm == '\0')
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
