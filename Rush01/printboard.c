/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printboard.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 21:02:57 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/21 21:03:06 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printboard(int board[])
{
	int i;
	int c;

	i = 0;
	while (i < 16)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
		if (i % 4 == 0)
			write(1, "\n", 1);
	}
}