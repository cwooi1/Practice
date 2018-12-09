/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 23:47:05 by sikim             #+#    #+#             */
/*   Updated: 2018/12/04 23:48:23 by sikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*temp;

	temp = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (temp == NULL)
		return (NULL);
	else
		return (ft_strcpy(temp, s1));
}
