/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:20:56 by ahsalam           #+#    #+#             */
/*   Updated: 2023/05/31 17:31:54 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int	i;

	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	if (n > 0 && n <= 9)
	{
		ft_putchar_fd(n + '0', 1);
		return (1);
	}
	i = ft_print_unsigned(n / 10);
	ft_putchar_fd((n % 10) + '0', 1);
	return (i + 1);
}
