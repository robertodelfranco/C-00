/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:24:33 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/07/25 09:24:36 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		ft_putchar('-');
		i = nb *(-1);
	}
	if (nb >= 0)
		i = nb;
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int	main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(7890233);
	printf("\n");
	ft_putnbr(76);
	printf("\n");
	ft_putnbr(80);
	printf("\n");
	ft_putnbr(97);
	printf("\n");
	ft_putnbr(10);
	printf("\n");
	ft_putnbr(9);
}
*/