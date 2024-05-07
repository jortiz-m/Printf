/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 08:52:28 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/05/07 11:39:46 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putunsignbr(unsigned int n, size_t *cont)
{
	if (n > 9)
		ft_putunbr_pf((n / 10), cont);
	ft_putchar_pf(('0' + n % 10), cont);
}
