/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz-m <jortiz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:27:26 by jortiz-m          #+#    #+#             */
/*   Updated: 2024/05/08 14:03:49 by jortiz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/**
 * @brief 
 * 
 * @param str 
 * @param ... 
 * @return int 
 */
int		ft_printf(const char *str, ...);
/**
 * @brief 
 * 
 */
int		ft_putnbr(int n);
/**
 * @brief 
 * 
 */
int		ft_puthex(unsigned long long lst, char format);
/**
 * @brief 
 * 
 */
void	ft_putunsignbr(unsigned int n, size_t *cont);
/**
 * @brief 
 * 
 */
void	ft_putcharlen(char c);
/**
 * @brief 
 * 
 */
void	ft_putstr(char *lst);
/**
 * @brief 
 * 
 */
void	ft_hexapointer(uintptr_t ptr);

#endif