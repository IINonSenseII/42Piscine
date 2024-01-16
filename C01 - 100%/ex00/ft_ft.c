/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <mathmart@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:26:42 by mathmart          #+#    #+#             */
/*   Updated: 2024/01/13 21:47:42 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
int main (void)
{
	int	nbrc;

	nbrc = 10;
	write(1, &nbrc, 2);
	ft_ft(&nbrc);
	write(1, &nbrc, 2);
	return (0);
}
*/
