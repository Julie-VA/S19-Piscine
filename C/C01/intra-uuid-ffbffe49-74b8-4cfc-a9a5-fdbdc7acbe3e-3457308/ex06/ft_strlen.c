/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:14:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/11 20:16:25 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		itr;

	itr = 0;
	while (str[itr] != '\0')
	{
		itr++;
	}
	return (itr);
}
