/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:51:48 by tjmari            #+#    #+#             */
/*   Updated: 2020/03/09 19:58:05 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** It initializes values
*/

void	init_vars(void)
{
	g_vars.format_position = 0;
	g_vars.width = 0;
	g_vars.zero = 0;
	g_vars.minus = 0;
	g_vars.precision = 0;
	g_vars.precision_value = 0;
	g_vars.ret = 0;
}

/*
** It prints string till '%' appears then it redirects to ft_parameters()
*/

int		ft_printf(const char *format, ...)
{
	init_vars();
	g_vars.str = (char *)format;
	va_start(g_vars.ap, format);
	while (*g_vars.str)
	{
		while (*g_vars.str == '%')
		{
			g_vars.str++;
			if (!ft_parameters())
				return (g_vars.ret);
			if (!g_vars.str)
				return (g_vars.ret);
		}
		write(1, g_vars.str++, 1);
		g_vars.ret++;
	}
	va_end(g_vars.ap);
	return (g_vars.ret);
}
