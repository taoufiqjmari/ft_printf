/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjmari <tjmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:53:29 by tjmari            #+#    #+#             */
/*   Updated: 2020/03/09 20:45:53 by tjmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "Libft/libft.h"

typedef struct	s_vars
{
	va_list		ap;
	char		*str;
	int			format_position;
	// char		specifier;
	int			width;
	int			zero;
	int			minus;
	int			precision;
	int			precision_value;
	int			ret;
}				t_vars;
t_vars			g_vars;

int				ft_printf(const char *format, ...);
int				ft_parameters(void);
void			ft_width(void);
void			ft_precision(void);
void			ft_specifier(void);
void			ft_character(void);
void			ft_string(void);
void			ft_pointer(void);
void			ft_integer(void);
void			ft_unsigned_int(void);
void			ft_hexadecimal(void);
void			ft_percent(void);

#endif
