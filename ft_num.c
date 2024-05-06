/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:31:50 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/05/06 12:37:57 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_countdigit(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	ft_num(int n, int *len)
{
	char			*str;
	int				count;
	unsigned int	number;
	int             j;

	count = ft_countdigit(n);
	str = ((char *)malloc (count + 1));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		write (1, "-2147483648", 11);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	number = n;
	str[count] = '\0';
	while (--count >= 0 && number != 0)
	{
		str[count] = (number % 10) + '0';
		number /= 10;
	}
	j = 0;
	while (str[j] != '\0')
		ft_putchar(str[j]);
	return (str);
}
