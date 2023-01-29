/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:06:50 by rimarque          #+#    #+#             */
/*   Updated: 2023/01/25 17:07:38 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
	int d = -345;
	char l = 'L';
	char *str = "era uma vez";
	printf("\nmy function:\n");
	printf("\nret value: %d\n", ft_printf(" char         = %c\n str          = %s\n pointer      = %p\n dec          = %d\n int          = %i\n unsigned int = %u\n hexmin       = %x\n hexhigh      = %X\n percent      = %%\n ", l, str, str, d, d, d, d, d));
	printf("\nprintf function:\n");
	printf("\nret value: %d\n", printf(" char         = %c\n str          = %s\n pointer      = %p\n dec          = %d\n int          = %i\n unsigned int = %u\n hexmin       = %x\n hexhigh      = %X\n percent      = %%\n ", l, str, str, d, d, d, d, d));
	return(0);
}
