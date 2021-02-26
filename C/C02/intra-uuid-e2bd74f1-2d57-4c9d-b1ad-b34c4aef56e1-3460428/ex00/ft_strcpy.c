/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:14:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/11 12:17:57 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int itr;

	itr = 0;
	while (src[itr] != '\0')
	{
		dest[itr] = src[itr];
		itr++;
	}
	dest[itr] = '\0';
	return (dest);
}
