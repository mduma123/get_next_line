/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:40:14 by mduma             #+#    #+#             */
/*   Updated: 2019/06/11 13:23:55 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(const char *s, char c)
{
	int get;
	int get_temp;

	get_temp = 0;
	get = 0;
	while (*s)
	{
		if (get_temp == 1 && *s == c)
			get_temp = 0;
		if (get_temp == 0 && *s != c)
		{
			get_temp = 1;
			get++;
		}
		s++;
	}
	return (get);
}

char			**ft_strsplit(char const *s, char c)
{
	int		get;
	char	**tab;
	int		a;
	int		b;
	int		start;

	if ((s == 0) || (c == 0))
		return (NULL);
	get = ft_count_words(s, c);
	if (!(tab = malloc((sizeof(char *) * (get + 1)))))
		return (NULL);
	a = 0;
	b = -1;
	while (++b < get)
	{
		while (s[a] && s[a] == c)
			a++;
		start = a;
		while (s[a] && s[a] != c)
			a++;
		tab[b] = ft_strsub(s, start, a - start);
		a++;
	}
	tab[b] = NULL;
	return (tab);
}
