/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvillat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:35:19 by gvillat           #+#    #+#             */
/*   Updated: 2015/11/27 19:00:42 by gvillat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include "stdio.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *start;

	start = s1;
	s1 += ft_strlen(s1);
	while (*s2)
		*(s1++) = *(s2++);
	*s1 = '\0';
	return (start);
}
