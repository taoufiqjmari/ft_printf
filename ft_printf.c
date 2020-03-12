/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:51:48 by tjmari            #+#    #+#             */
/*   Updated: 2020/03/12 12:49:31 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** It initializes values
*/

void	init_vars(void)
{
	g_vars.width = 0;
	g_vars.minus = 0;
	g_vars.zero = 0;
	g_vars.precision = 0;
	g_vars.precision_value = 0;
	g_vars.spaces = 0;
	g_vars.zero_adfix = 0;
	g_vars.ret = 0;
}

/*
** It reinitializes values after they are used to treat a parameter
*/

void	reinit_vars(void)
{
	g_vars.width = 0;
	g_vars.minus = 0;
	g_vars.zero = 0;
	g_vars.precision = 0;
	g_vars.precision_value = 0;
	g_vars.spaces = 0;
	g_vars.zero_adfix = 0;
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
		if (*g_vars.str == '%')
		{
			g_vars.str++;
			if (!ft_parameters())
				return (0);
			reinit_vars();
		}
		else
		{
			ft_putchar(*g_vars.str);
			g_vars.str++;
		}
	}
	va_end(g_vars.ap);
	return (g_vars.ret);
}
