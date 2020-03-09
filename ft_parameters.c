/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parameters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:25:23 by tjmari            #+#    #+#             */
/*   Updated: 2020/03/09 20:37:40 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** It checks flags, width, and precision
** the redirect to specifier()
*/

int		ft_parameters(void)
{
	ft_width();
	ft_precision();
	if (!ft_specifier())
		return (0);
	return (1);
}
