/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:22:38 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/25 09:22:44 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char i, char j, char c);

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	c;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			c = j + 1;
			while (c <= '9')
			{
				ft_putchar(i, j, c);
				c++;
			}
			j++;
		}
		i++;
	}
}

void	ft_putchar(char i, char j, char c)
{
	char	v;
	char	e;

	v = ',';
	e = ' ';
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &c, 1);
	if (i != '7')
	{
		write(1, &v, 1);
		write(1, &e, 1);
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/