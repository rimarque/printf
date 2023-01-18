/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:12:10 by rimarque          #+#    #+#             */
/*   Updated: 2023/01/18 10:33:28 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
# include <unistd.h>
# include <stdio.h>

int	ft_putchar(char c, int len)
{
	write(1, &c, 1);
	return (len + 1);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_putstr(char *s, int len)
{
	int len_s;
	if (!s)
	{
		write(1,"(null)", 6);
		return (len + 6);
	}
	len_s = ft_strlen(s);
	write(1, s, len_s);
	return (len + len_s);
}

/*int main()
{
	printf("FT_PUTCHAR:\nmy function:\n");
	printf("\nret value: %d", ft_putchar('c', 0));
	printf("\nprintf function:\n");
	printf("\nret value: %d", printf("%c", 'c'));
	printf("\n------------\n");
	printf("FT_PUTSTR\nmy function:\n");
	printf("ret value: %d\n", ft_putstr("ola\n", 0));
	printf("printf function:\n");	
	printf("ret value: %d\n", printf("%s\n", "ola"));
}*/

