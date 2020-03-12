/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 21:34:46 by tjmari            #+#    #+#             */
/*   Updated: 2020/03/12 15:38:45 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
	g_vars.ret++;
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}

void	ft_putnbr(int c)
{
	long	num;

	num = c;
	if (num < 0)
	{
		num = -num;
		ft_putchar('-');
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + 48);
}
