/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvillat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:08:32 by gvillat           #+#    #+#             */
/*   Updated: 2015/12/01 17:01:13 by gvillat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*(s + 1) == c)
			return ((char*)s + 1);
		if (*s == c)
			return ((char*)s);
		s++;
	}
	return (NULL);
}
