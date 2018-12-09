/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 08:15:35 by sikim             #+#    #+#             */
/*   Updated: 2018/12/06 08:16:40 by sikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (dst[j] && j < dstsize)
		j++;
	while ((src[k]) && ((j + k + 1) < dstsize))
	{
		dst[j + k] = src[k];
		k++;
	}
	if (j != dstsize)
		dst[j + k] = '\0';
	return (j + ft_strlen(src));
}
