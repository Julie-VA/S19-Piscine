/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:14:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/14 12:54:56 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int itr;

	itr = 0;
	while (str[itr] != '\0')
	{
		if (str[itr] < ' ' || str[itr] > '~')
		{
			return (0);
		}
		itr++;
	}
	return (1);
}