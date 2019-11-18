/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 14:31:45 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/18 16:06:46 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		lenght(int n)
{
	int		i;

	i = 0;
	if (n < 0)
		i++;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*s;

	i = lenght(n);
	if (!(s = (char*)malloc((i + 1) * sizeof(char))))
		return (0);
	s[i] = '\0';
	i--;
	if (n == 0)
	{
		s[0] = 48;
		return (s);
	}
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		s[i] = (char)(n % 10) + '0';
		n /= 10;
		i--;
	}
	return (s);
}
