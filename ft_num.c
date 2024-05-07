/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:31:50 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/05/07 11:37:52 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr(int n, size_t *cont)
{
	if (n == -2147483648)
	{
		ft_putnbr_pf((n / 10), cont);
		ft_putchar_pf('8', cont);
	}
	else if (n < 0)
	{
		ft_putchar_pf('-', cont);
		ft_putnbr_pf(-n, cont);
	}
	else
	{
		if (n > 9)
			ft_putnbr_pf((n / 10), cont);
		ft_putchar_pf(('0' + n % 10), cont);
	}
}
