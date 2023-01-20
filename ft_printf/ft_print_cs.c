/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_cs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:12:10 by rimarque          #+#    #+#             */
/*   Updated: 2023/01/20 17:06:39 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_c(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_put_s(char *s)
{
	int len;
	if (!s)
	{
		write(1,"(null)", 6);
		return (6);
	}
	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}

/*int main()
{
	printf("FT_PUTCHAR:\nmy function:\n");
	printf("\nret value: %d", ft_put_c('c', 0));
	printf("\nprintf function:\n");
	printf("\nret value: %d", printf("%c", 'c'));
	printf("\n------------\n");
	printf("FT_PUTSTR\nmy function:\n");
	printf("ret value: %d\n", ft_put_s("ola\n", 0));
	printf("printf function:\n");	
	printf("ret value: %d\n", printf("%s\n", "ola"));
}*/

