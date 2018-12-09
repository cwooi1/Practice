/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 10:35:03 by sikim             #+#    #+#             */
/*   Updated: 2018/12/06 10:35:31 by sikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = 0;
	if (s1 && s2)
		str = (char *)malloc(sizeof(char) * (ft_strlen(s1) \
		+ ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	else
	{
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
		return (str);
	}
	return (0);
}
