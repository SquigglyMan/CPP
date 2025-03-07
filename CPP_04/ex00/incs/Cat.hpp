/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:50:44 by llarue            #+#    #+#             */
/*   Updated: 2024/02/18 15:19:42 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat( void );
		Cat( const Cat& src);
		Cat &operator=( const Cat& src );
		~Cat( void );

		void	makeSound( void ) const;
};

#endif