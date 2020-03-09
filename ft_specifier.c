/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 20:18:31 by tjmari            #+#    #+#             */
/*   Updated: 2020/03/09 20:33:28 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** It checks what specifier is used then send the string /
** to be treated depending on the specifier
*/

void	ft_specifier(void)
{
	if (g_vars.str == 'c')
		ft_character();
	if (g_vars.str == 's')
		ft_string();
	if (g_vars.str == 'p')
		ft_pointer();
	if (g_vars.str == 'd' || g_vars.str == 'i')
		ft_integer();
	if (g_vars.str == 'u')
		ft_unsigned_int();
	if (g_vars.str == 'x' || g_vars.str == 'X')
		ft_hexadecimal();
	if (g_vars.str == '%')
		ft_percent();
	if (g_vars.str != 'c' && g_vars.str != 's' && g_vars.str != 'p'
		&& g_vars.str != 'd' && g_vars.str != 'i' && g_vars.str != 'u'
		&& g_vars.str != 'x' && g_vars.str != 'X' && g_vars.str != '%')
		return (0);
	g_vars.str++;
	return (1);
}
