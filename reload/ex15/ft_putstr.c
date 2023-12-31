/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:15:54 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/04 15:31:03 by dasalaza         ###   ########.fr       */
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
	ft_putchar(str++);
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
