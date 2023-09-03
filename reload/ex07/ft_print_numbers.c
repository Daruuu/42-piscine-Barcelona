/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daruuu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:57:41 by daruuu            #+#    #+#             */
/*   Updated: 2023/09/03 21:51:57 by daruuu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_print_numbers(void)
{
  char	zero;
  char	nine;

  zero = '0';
  nine = '9';

  while (zero <= nine)
	ft_putchar(zero++);
}
/*
int	main(void)
{
  ft_print_numbers();

  return(0);
}
*/
