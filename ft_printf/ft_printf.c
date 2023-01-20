/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:29:54 by rimarque          #+#    #+#             */
/*   Updated: 2023/01/20 17:02:38 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_args(va_list args, char format)
{
	int arg_len;

	arg_len = 0;
	if (format == 'c')
		arg_len = ft_put_c(va_arg(args, int));
	if (format == '%')
		arg_len = ft_put_c('%');
	if (format == 's')
		arg_len = ft_put_s(va_arg(args, char *));
	if (format =='i' || format == 'd')
		arg_len = ft_put_id(va_arg(args, int));
	if (format == 'u')
                arg_len = ft_put_u(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
                arg_len = ft_put_xX(va_arg(args, unsigned int), format);
	if (format == 'p')
                arg_len = ft_put_id(va_arg(args, unsigned long long));
	return(arg_len);
}

int	ft_printf(const char *s_format, ...)
{
	va_list args;
	int	len;
	int	i;
	
	va_start(args, s_format);
	i = 0;
	len = 0;
	while (s_format[i])
	{
		if (s_format[i] == '%')
		{
			len += ft_print_args(args, s_format[i + 1]);
			i++;
		}
		else
			len += ft_put_c(*s_format);
		i++;
	}
	va_end(args);
	return (len);
}
int main(void)
{
	int d = 364;
	char l = 'L';
	char *str = "era uma vez";
	printf("\nmy function:\n");
	printf("\nret value: %d\n", ft_printf(" char         = %c\n str          = %s\n pointer      = %p\n dec          = %d\n int          = %i\n unsigned int = %u\n hexmin       = %x\n hexhigh      = %X\n percent      = %%\n ", l, str, str, d, d, d, d, d));
	printf("\nprintf function:\n");
	printf("\nret value: %d\n", printf(" char         = %c\n str          = %s\n pointer      = %p\n dec          = %d\n int          = %i\n unsigned int = %u\n hexmin       = %x\n hexhigh      = %X\n percent      = %%\n ", l, str, str, d, d, d, d, d));
	return(0);
}
