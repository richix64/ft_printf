/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:10:20 by rpocater          #+#    #+#             */
/*   Updated: 2023/07/01 13:15:43 by rpocater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

int		ft_printf(char const *str, ...);
int		ft_argument_percent(void);
int		ft_argument_c(int c);
int		ft_argument_s(char *s);
int		ft_argument_p(unsigned long address);
int		ft_arguments_d_i(int number);
int		ft_argument_u(unsigned int nbr);
int		ft_arguments_x(unsigned int nbr, char type);
int		ft_hex_length(unsigned long nbr);
int		ft_decimal_length(long int nbr);
char	ft_decimal_converter_to_hex(char digit, char type);
int		ft_print_reversed_str(char *str);
void	ft_free_ptr(char *ptr);

#endif
