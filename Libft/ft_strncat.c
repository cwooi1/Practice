/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 00:00:20 by sikim             #+#    #+#             */
/*   Updated: 2018/12/08 16:43:19 by sikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char	*strs1;

	strs1 = s1;
	while (*strs1 != '\0')
		strs1++;
	while (n-- > 0 && *s2 != '\0')
		*strs1++ = *s2++;
	*strs1 = '\0';
	return (s1);
}
