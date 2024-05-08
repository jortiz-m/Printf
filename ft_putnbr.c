/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:31:50 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/05/08 14:01:52 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	size_t	count;

	count = 0;
	if (n == -2147483648)
	{
		ft_putnbr_pf((n / 10), cont);
		count += ft_putchar_pf('8', cont);
	}
	else if (n < 0)
	{
		count += ft_putchar_pf('-', cont);
		ft_putnbr_pf(-n, cont);
	}
	else
	{
		if (n > 9)
			ft_putnbr_pf((n / 10), cont);
		count += ft_putchar_pf(('0' + n % 10), cont);
	}
	return (count);
}
