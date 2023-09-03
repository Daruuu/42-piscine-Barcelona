/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daruuu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:54:04 by daruuu            #+#    #+#             */
/*   Updated: 2023/09/03 21:50:23 by daruuu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
  write(1, c, 1);
}

void	ft_putstr(char *str)
{
  while (*str)
  {
	ft_putchar(str++);
  }
}

/*
int	main()
{
  char	*str;

  str = "hello world!";
  ft_putstr(str);

  return (0);
}
*/
