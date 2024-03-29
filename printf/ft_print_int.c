/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:23:57 by ahsalam           #+#    #+#             */
/*   Updated: 2023/05/31 12:05:50 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	int				i;
	unsigned int	j;

	i = n;
	j = 1;
	if (n < 0 && n != -2147483648)
	{
		i = -n;
		j++;
	}
	while (i > 9)
	{
		i = i / 10;
		j++;
	}
	ft_putnbr_fd(n, 1);
	if (n == -2147483648)
		return (11);
	return (j);
}
