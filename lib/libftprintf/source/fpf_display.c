/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fpf_display.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvillat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 05:42:04 by gvillat           #+#    #+#             */
/*   Updated: 2016/12/15 05:42:05 by gvillat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fpf_printf.h"

void	fpf_display(PF *argument)
{
	argument->ret += write(FD, &g_buff, g_i);
	fpf_init_buff();
}

void	fpf_buf(char c, PF *argument)
{
	g_buff[g_i] = c;
	g_i++;
	if (g_i == BUFF_MAX)
		fpf_display(argument);
}

void	*fpf_buff(char *str, PF *argument)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
			fpf_buf(str[i++], argument);
	}
	return (NULL);
}
