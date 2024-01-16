/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:49:34 by llarue            #+#    #+#             */
/*   Updated: 2024/01/16 17:08:08 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal  {
	private:
		Brain	*brain;

	public:
		Dog( void );
		Dog( const Dog& src);
		Dog &operator=( const Dog& src );
		~Dog( void );

		void	makeSound( void ) const;

		Brain	*getBrain( void ) const;
};

#endif