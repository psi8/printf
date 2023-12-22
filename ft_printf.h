/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:09:16 by psitkin           #+#    #+#             */
/*   Updated: 2023/12/22 22:40:17 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct p_list
{
	int	length;
	int	error;
}		p_list;

int		ft_printf(const char *format, ...);
void	print_format(char spec, va_list ap, p_list *ret);
void	print_char(int c, p_list *ret);
void	print_str(char *str, p_list *ret);
void	print_dec(long nbr, p_list *ret);
void	print_hex(long nbr, int upper_case, p_list *ret);
void	print_prt(unsigned long nbr, p_list *ret);

#endif