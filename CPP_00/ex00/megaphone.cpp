/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 07:58:00 by llarue            #+#    #+#             */
/*   Updated: 2024/01/04 11:34:05 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char** av)
{
	int	i;
	int	j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(i = 1; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
				std::cout << (char)toupper(av[i][j]);
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}
