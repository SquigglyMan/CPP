/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:46:24 by llarue            #+#    #+#             */
/*   Updated: 2024/03/02 11:02:22 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

# define COLOR_RESET	"\e[0m"
# define ORANGE			"\e[38;5;215m"
# define PURPLE			"\e[38;5;105m"
# define BLUE			"\e[38;5;27m"
# define RED			"\e[38;5;160m"
# define GREEN			"\e[38;5;48m"
# define YELLOW			"\e[38;5;226m"
# define CYAN			"\e[38;5;51m"

class ICharacter;

class AMateria {
	protected:
		std::string	type;

	public:
		AMateria();
		AMateria( std::string const & type );
		AMateria( AMateria const &src );
		AMateria& operator=( AMateria const &src );
		virtual ~AMateria();

		std::string const & getType() const;
		
		virtual AMateria*	clone() const = 0;
		virtual void	use( ICharacter& target );
};

#endif