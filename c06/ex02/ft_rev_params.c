/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkorkmaz <hkorkmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 04:12:28 by hkorkmaz          #+#    #+#             */
/*   Updated: 2022/09/13 09:39:23 by hkorkmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	while (--argc > 0)
	{
		write(1, argv[argc], str(argv[argc]));
		write(1, "\n", 1);
	}
	return (0);
}
