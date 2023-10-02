/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:05:19 by ahsalam           #+#    #+#             */
/*   Updated: 2023/05/31 12:03:00 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_print_char(int c);
int		ft_print_string(char *str);
int		ft_print_int(int n);
char	*ft_creating_string(unsigned long val, int *i);
int		ft_print_hex(unsigned int val, int i);
int		ft_print_pointer(unsigned long val, int i);
int		ft_print_unsigned(unsigned int n);

#endif