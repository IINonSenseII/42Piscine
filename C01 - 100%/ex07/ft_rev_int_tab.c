/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <mathmart@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 00:36:20 by mathmart          #+#    #+#             */
/*   Updated: 2024/01/14 02:08:58 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}

/*
int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5, 6};
	int	size;
	int	i;

	size = 7;
	i = 0;
	ft_rev_int_tab(tab, size);
	while( i < size)
	{
		printf("%d",tab[i]);
		i++;
	}
	return (0);
}
*/
