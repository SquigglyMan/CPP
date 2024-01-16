/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:55:39 by llarue            #+#    #+#             */
/*   Updated: 2024/01/16 17:10:22 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
	private:

	public:
		std::string	ideas[100];

		Brain( void );
		Brain( const Brain& src );
		Brain& operator=( const Brain& src );
		~Brain( void );
};

#endif