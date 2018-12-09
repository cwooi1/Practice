/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 23:35:04 by sikim             #+#    #+#             */
/*   Updated: 2018/12/04 23:38:42 by sikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*strsrc;
	char	*strdst;

	strsrc = (char*)src;
	strdst = (char*)dst;
	if (strsrc < strdst)
	{
		strsrc = strsrc + len - 1;
		strdst = strdst + len - 1;
		while (len > 0)
		{
			*strdst-- = *strsrc--;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*strdst++ = *strsrc++;
			len--;
		}
	}
	return (dst);
}
