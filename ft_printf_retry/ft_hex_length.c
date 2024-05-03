/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:26:57 by rpocater          #+#    #+#             */
/*   Updated: 2023/07/01 13:09:09 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_length(unsigned long nbr)
{
	int	length;

	length = 0;
	while (nbr > 0)
	{
		nbr /= 16;
		length++;
	}
	return (length);
}
