/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 21:58:25 by psitkin           #+#    #+#             */
/*   Updated: 2023/12/22 22:05:02 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_ptr(unsigned long nbr, p_list *ret)
{
	char	*digits;

	digits = "0123456789abcdef";
	if (nbr >= 16)
	{
		print_ptr(nbr / 16, ret);
		nbr = nbr % 16;
	}
	print_char(digits[nbr], ret);
}