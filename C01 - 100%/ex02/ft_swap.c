/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmart <mathmart@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:51:45 by mathmart          #+#    #+#             */
/*   Updated: 2024/01/13 22:07:14 by mathmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main (void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 5;
	b = 9;
	ptra = &a;
	ptrb = &b;
	ft_swap(ptra, ptrb);
	printf("a: %d, b: %d\n", a, b);
}
*/
