/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:42:36 by rimarque          #+#    #+#             */
/*   Updated: 2023/01/12 17:44:03 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
/*# include <stdint.h>
# include <limits.h>*/


int     ft_putchar(char c, int len);
int     ft_putstr(char *s, int len);
int     ft_putnbr(int n, int len, char format);

#endif
