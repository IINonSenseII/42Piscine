/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <mathmart@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 02:38:36 by mathmart          #+#    #+#             */
/*   Updated: 2024/01/14 04:13:13 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	x;

	i = 0;
	while (i < size)
	{
		x = i + 1;
		while (x < size)
		{
			if (tab[i] > tab[x])
			{
				temp = tab[i];
				tab[i] = tab[x];
				tab[x] = temp;
			}
			x++;
		}
		i++;
	}
}

/*
int main (void)
{
	int	tab[] = {4, 2, 5, 8, 9, 3, 1};
	int	size;
	int	i;

	size = 7;
	i = 0;
	ft_sort_int_tab(tab, size);
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
*/
