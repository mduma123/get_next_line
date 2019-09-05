/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:42:17 by mduma             #+#    #+#             */
/*   Updated: 2019/07/01 10:39:37 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_itoa(int n)
{
	char	arr[12];
	char	*a;
	int		neg;
	int		b;
	int		c;

	c = 0;
	b = 0;
	neg = n < 0 ? -1 : 1;
	while (neg * n > 9 || neg * n < 0)
	{
		arr[b++] = '0' + neg * (n % 10);
		n = n / 10;
	}
	arr[b++] = '0' + neg * n;
	if (neg < 0)
		arr[b++] = '-';
	if ((a = (char *)malloc(sizeof(char) * b + 1)) == NULL)
		return (NULL);
	a[b] = '\0';
	while (b--)
		a[b] = arr[c++];
	return (a);
}
