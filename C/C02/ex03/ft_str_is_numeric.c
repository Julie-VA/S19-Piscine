/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:14:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/14 11:00:51 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int	itr;

	itr = 0;
	while (str[itr] != '\0')
	{
		if (str[itr] < '0' || str[itr] > '9')
		{
			return (0);
		}
		itr++;
	}
	return (1);
}
